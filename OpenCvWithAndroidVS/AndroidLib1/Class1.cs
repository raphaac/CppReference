using System.Runtime.InteropServices;

namespace AndroidLib1
{
    public static partial class Class1
    {
        [LibraryImport("libSharedObject1.so")]
        [UnmanagedCallConv(CallConvs = new Type[] { typeof(System.Runtime.CompilerServices.CallConvCdecl) })]
        public static partial int Test();
    }
}