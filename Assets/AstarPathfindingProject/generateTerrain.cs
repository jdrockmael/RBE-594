using UnityEditor;
using UnityEngine;


using System.IO;

public class generateTerrain : MonoBehaviour
{
    // Heightmap
    Texture2D m_HeightmapGlobal = null;
    public static float kNormalizedHeightScale => 32766.0f / 65535.0f;
    void Start()
    {
        var rawData = File.ReadAllBytes("Assets/Images/UH200_map_cropped.png");

        m_HeightmapGlobal = new Texture2D(2, 2);
        m_HeightmapGlobal.LoadImage(rawData);
        m_HeightmapGlobal = ConvertToGrayscale(m_HeightmapGlobal);
        Create();

        //GameObject.Find("Ground").GetComponent<Renderer>().enabled = false;
    }

    void Update()
    {
        // GameObject.Find("Ground").GetComponent<Renderer>().enabled = false;
    }
    void Create()
    {
        // create tiles
        float TerrainWidth = (float)32;
        float TerrainLength = (float)13.9;
        int TerrainHeight = 6;

        //Vector3 StartPosition = new Vector3(-TerrainWidth / 2 - (float)1.6, (float)-TerrainHeight + (float)0.1, -TerrainLength / 2 + (float)1.6);
        //Vector3 StartPosition = new Vector3((float)-2.384, (float)-3.764, (float)1.359);
        Vector3 StartPosition = new Vector3(-TerrainWidth / 2, (float)-TerrainHeight + (float)3, -TerrainLength / 2);
        float HeightmapRemapMax = TerrainHeight;
        float HeightmapRemapMin = 0f;

        int PixelError = 5;
        int BaseMapDistance = 1000;

        int HeightmapResolution = 129;
        int BaseTextureResolution = 512;
        int ControlTextureResolution = 264;
        int DetailResolution = 512;
        int DetailResolutionPerPatch = 16;

        Vector2Int tileOffset = Vector2Int.zero;
        Vector2Int tileOffsetSource = Vector2Int.zero;
        //Vector2Int tileResolution = new Vector2Int(TerrainWidth, TerrainLength);
        //Vector3 tileSize = new Vector3(tileResolution.x, TerrainHeight, tileResolution.y);
        Vector3 tileSize = new Vector3(TerrainWidth, TerrainHeight, TerrainLength);
        Vector3 tilePosition = StartPosition;
        Terrain[] terrains = new Terrain[1];

        string TerrainAssetDirectory = "Assets/Terrain/";
        string assetFolderPath = GetAssetPathFromFullPath(TerrainAssetDirectory);

        try
        {
            // heightmap offset
            tileOffsetSource = new Vector2Int(m_HeightmapGlobal.width, m_HeightmapGlobal.height);

            tileOffset.y = 0;
            tilePosition.z = StartPosition.z;

            //EditorUtility.DisplayProgressBar("Creating terrains", "Updating terrain tile", 0);

            TerrainData terrainData = new TerrainData();
            terrainData.alphamapResolution = ControlTextureResolution;
            terrainData.baseMapResolution = BaseTextureResolution;
            terrainData.SetDetailResolution(DetailResolution, DetailResolutionPerPatch);

            GameObject newGO = Terrain.CreateTerrainGameObject(terrainData);

            // Set terrain to obstacle layer
            newGO.layer = 7;

            // Show terrain
            newGO.GetComponent<Terrain>().enabled = true;

            Terrain newTerrain = newGO.GetComponent<Terrain>();
            newTerrain.allowAutoConnect = true;
            newTerrain.drawInstanced = true;
            newTerrain.heightmapPixelError = PixelError;
            newTerrain.basemapDistance = BaseMapDistance;
            newTerrain.transform.position = tilePosition;

            // heightmap remap
            var remap = (HeightmapRemapMax - HeightmapRemapMin) / TerrainHeight;
            var baseLevel = HeightmapRemapMin / TerrainHeight;

            // global texture2d
            CopyTextureToTerrainHeight(terrainData, m_HeightmapGlobal, new Vector2Int(0, 0), (m_HeightmapGlobal.width), 1, baseLevel, remap);

            newTerrain = InvertHeightmap(newTerrain);

            terrains[0] = newTerrain;

            terrainData.size = tileSize; // set terrain size after heightmap process

            // Resize resolution
            ResizeHeightmap(terrainData, HeightmapResolution);

            /* save terrain data asset
            string terrainName = $"Terrain_{x}_{y}"; ;
            Guid newGuid = Guid.NewGuid();
            terrainName = $"Terrain_{x}_{y}_{newGuid}";
            newGO.name = terrainName;
                    
            string assetPath = $"{assetFolderPath}/{terrainName}.asset";
            if (!Directory.Exists(assetFolderPath))
            {
                Directory.CreateDirectory(assetFolderPath);
            }
            AssetDatabase.CreateAsset(terrainData, assetPath);
            */

            //Undo.RegisterCreatedObjectUndo(newGO, "Create terrain");
        }
        finally
        {
            AstarPath.active.Scan();
            //AssetDatabase.SaveAssets();
            //AssetDatabase.Refresh();
            //EditorUtility.ClearProgressBar();
        }
    }

    string GetAssetPathFromFullPath(string fullPath)
    {
        string newPath = fullPath;
        string assetsFolder = "Assets";
        string assetsDataPath = Application.dataPath;
        if (fullPath.Contains(assetsDataPath))
        {
            newPath = assetsFolder + fullPath.Replace(assetsDataPath, string.Empty);
        }

        return newPath;
    }

    public static void ResizeHeightmap(TerrainData terrainData, int resolution)
    {
        RenderTexture oldRT = RenderTexture.active;

        RenderTexture oldHeightmap = RenderTexture.GetTemporary(terrainData.heightmapTexture.descriptor);
        Graphics.Blit(terrainData.heightmapTexture, oldHeightmap);
#if UNITY_2019_3_OR_NEWER
        // terrain holes
        RenderTexture oldHoles = RenderTexture.GetTemporary(terrainData.holesTexture.width, terrainData.holesTexture.height);
        Graphics.Blit(terrainData.holesTexture, oldHoles);
#endif

        //Undo.RegisterCompleteObjectUndo(terrainData, "Resize heightmap");

        float sUV = 1.0f;
        int dWidth = terrainData.heightmapResolution;
        int sWidth = resolution;

        Vector3 oldSize = terrainData.size;
        terrainData.heightmapResolution = resolution;
        terrainData.size = oldSize;

        oldHeightmap.filterMode = FilterMode.Bilinear;


        float k = (dWidth - 1.0f) / (sWidth - 1.0f) / dWidth;
        float scaleX = sUV * (sWidth * k);
        float offsetX = (float)(0.5 / dWidth - 0.5 * k);
        Vector2 scale = new Vector2(scaleX, scaleX);
        Vector2 offset = new Vector2(offsetX, offsetX);

        Graphics.Blit(oldHeightmap, terrainData.heightmapTexture, scale, offset);
        RenderTexture.ReleaseTemporary(oldHeightmap);

#if UNITY_2019_3_OR_NEWER
        oldHoles.filterMode = FilterMode.Point;
        Graphics.Blit(oldHoles, (RenderTexture)terrainData.holesTexture);
        RenderTexture.ReleaseTemporary(oldHoles);
#endif

        RenderTexture.active = oldRT;

        terrainData.DirtyHeightmapRegion(new RectInt(0, 0, terrainData.heightmapTexture.width, terrainData.heightmapTexture.height), TerrainHeightmapSyncControl.HeightAndLod);
#if UNITY_2019_3_OR_NEWER
        terrainData.DirtyTextureRegion(TerrainData.HolesTextureName, new RectInt(0, 0, terrainData.holesTexture.width, terrainData.holesTexture.height), false);
#endif
    }

    public static void CopyTextureToTerrainHeight(TerrainData terrainData, Texture2D heightmap, Vector2Int indexOffset, int resolution, int numTiles, float baseLevel, float remap)
    {
        terrainData.heightmapResolution = resolution + 1;

        float hWidth = heightmap.height;
        float div = hWidth / numTiles;

        float scale = ((resolution / (resolution + 1.0f)) * (div + 1)) / hWidth;
        float offset = ((resolution / (resolution + 1.0f)) * div) / hWidth;

        Vector2 scaleV = new Vector2(scale, scale);
        Vector2 offsetV = new Vector2(offset * indexOffset.x, offset * indexOffset.y);

        Material blitMaterial = GetHeightBlitMaterial();
        blitMaterial.SetFloat("_Height_Offset", baseLevel * kNormalizedHeightScale);
        blitMaterial.SetFloat("_Height_Scale", remap * kNormalizedHeightScale);
        RenderTexture heightmapRT = RenderTexture.GetTemporary(terrainData.heightmapTexture.descriptor);
        Graphics.Blit(heightmap, heightmapRT, blitMaterial);

        Graphics.Blit(heightmapRT, terrainData.heightmapTexture, scaleV, offsetV);

        terrainData.DirtyHeightmapRegion(new RectInt(0, 0, terrainData.heightmapTexture.width, terrainData.heightmapTexture.height), TerrainHeightmapSyncControl.HeightAndLod);
    }

    public static Material GetHeightBlitMaterial()
    {
        return new Material(Shader.Find("Hidden/TerrainTools/HeightBlit"));
    }
    Terrain InvertHeightmap(Terrain terrain)
    {
        TerrainData terrainData = terrain.terrainData;
        float[,] heights = terrainData.GetHeights(0, 0, terrainData.heightmapResolution, terrainData.heightmapResolution);

        // Invert the heights
        for (int i = 0; i < terrainData.heightmapResolution; i++)
        {
            for (int j = 0; j < terrainData.heightmapResolution; j++)
            {
                heights[i, j] = 1.0f - heights[i, j];
            }
        }

        // Apply the inverted heights to the terrain
        terrainData.SetHeights(0, 0, heights);

        return terrain;
    }
    Texture2D ConvertToGrayscale(Texture2D graph)
    {
        Color32[] pixels = graph.GetPixels32();
        for (int x = 0; x < graph.width; x++)
        {
            for (int y = 0; y < graph.height; y++)
            {
                Color32 pixel = pixels[x + y * graph.width];
                int p = ((256 * 256 + pixel.r) * 256 + pixel.b) * 256 + pixel.g;
                int b = p % 256;
                p = Mathf.FloorToInt(p / 256);
                int g = p % 256;
                p = Mathf.FloorToInt(p / 256);
                int r = p % 256;
                float l = (0.2126f * r / 255f) + 0.7152f * (g / 255f) + 0.0722f * (b / 255f);
                Color c = new Color(l, l, l, 1);
                graph.SetPixel(x, y, c);
            }
        }
        graph.Apply(false);
        return graph;
    }
}
