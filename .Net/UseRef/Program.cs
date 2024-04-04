using System.Runtime.InteropServices;

namespace UseRef
{
    internal class Program
    {
        [DllImport("Sum.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern int soma(int a, int b);

        static void Main(string[] args)
        {
            int resultado = soma(5, 3);
            Console.WriteLine($"O resultado é: {resultado}");
            Console.ReadLine();
        }

    }        
}
