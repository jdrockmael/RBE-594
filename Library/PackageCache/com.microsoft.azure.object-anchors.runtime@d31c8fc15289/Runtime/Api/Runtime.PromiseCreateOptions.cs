//
// Copyright (c) Microsoft Corporation. All rights reserved.
// Microsoft.Azure.ObjectAnchors
// This file was auto-generated from AbiDefinition.cs.
//

// <auto-generated />

namespace Microsoft.Azure.ObjectAnchors
{
    using System;
    using System.Runtime.InteropServices;

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void aoa_promise_on_complete(IntPtr context, ref PackedValue value);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void aoa_promise_on_error(IntPtr context, IntPtr handle, status result);

    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void aoa_promise_on_progress(IntPtr context, float progress);

    [StructLayout(LayoutKind.Sequential)]
    internal struct PromiseCreateOptions
    {
        public IntPtr context;
        public aoa_promise_on_complete onComplete;
        public aoa_promise_on_error onError;
        public aoa_promise_on_progress onProgress;
    }

}
