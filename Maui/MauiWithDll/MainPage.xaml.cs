using MauiWithDll.DynamicLibrary;

namespace MauiWithDll
{
    public partial class MainPage : ContentPage
    {
        int count = 0;

        public MainPage()
        {
            InitializeComponent();
        }

        private void OnCounterClicked(object sender, EventArgs e)
        {
            //count++;

            //if (count == 1)
            //    CounterBtn.Text = $"Clicked {count} time";
            //else
            //    CounterBtn.Text = $"Clicked {count} times";


            CounterBtn.Text = $"Clicked {LibraryInDotNet.LibrarySumInDotNet.Sum(5, 3)} time";

            SemanticScreenReader.Announce(CounterBtn.Text);
        }
    }

}
