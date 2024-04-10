using System.Runtime.InteropServices;

namespace AndroidLib1
{
    public static class Class1
    {
        [DllImport("libSharedObject1.so", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Test();
    }
}