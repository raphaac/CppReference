using System.Runtime.InteropServices;

namespace LibraryInDotNetUniversalWindows
{
    public static class LibrarySumInDotNetUniversalWindows
    {
        private static class RaphaelMethods
        {
            private const string DllName = "Sum.dll";

            [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
            public static extern int soma(int a, int b);

            [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
            public static extern int multiplicacao(int a, int b);
        }

        public static int Sum(int a, int b)
        {
            return RaphaelMethods.soma(a, b);
        }

    }
}
