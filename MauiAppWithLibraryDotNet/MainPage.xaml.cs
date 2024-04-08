using System.Runtime.InteropServices;

namespace MauiAppWithLibraryDotNet
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private static class RaphaelMethods
        {
            private const string DllName = "Sum.dll";

            [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
            public static extern int soma(int a, int b);

            [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
            public static extern int multiplicacao(int a, int b);
        }

        private void OnCounterClicked(object sender, EventArgs e)
        {

            #if WINDOWS
                CounterBtn.Text = $"Clicked {RaphaelMethods.soma(5, 3)} time";
            #elif ANDROID
                CounterBtn.Text = $"Clicked 0 time";
            #else
                CounterBtn.Text = $"Clicked 0 time";
            #endif

            SemanticScreenReader.Announce(CounterBtn.Text);
        }
    }

}
