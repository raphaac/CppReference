using System.Runtime.InteropServices;

namespace AndroidLib1
{
    public static class Class1
    {
        [DllImport("libMyLib.so", CallingConvention = CallingConvention.Cdecl)]
        public static extern int test();
    }
}