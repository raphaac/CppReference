using System.Runtime.InteropServices;

namespace MauiWithDll.DynamicLibrary
{
    public static class RaphaelMethods
    {
        private const string DllName = "Sum.dll";

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int soma(int a, int b);

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int multiplicacao(int a, int b);
    }
}
