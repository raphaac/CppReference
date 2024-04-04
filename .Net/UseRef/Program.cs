using System.Runtime.InteropServices;

namespace UseRef
{
    internal class Program
    {
        private static class RaphaelMethods
        {
            private const string DllName = "Sum.dll";

            [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
            public static extern int soma(int a, int b);

            [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
            public static extern int multiplicacao(int a, int b);
        }

        static void Main(string[] args)
        {
            int resultado = RaphaelMethods.soma(5, 3); 
            Console.WriteLine($"O resultado da soma é: {resultado}");

            resultado = RaphaelMethods.multiplicacao(5, 3);
            Console.WriteLine($"O resultado da multiplicação é: {resultado}");

            Console.ReadLine();
        }
    }        
}
