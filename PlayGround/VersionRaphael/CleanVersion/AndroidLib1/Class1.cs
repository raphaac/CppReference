using Android.Views;
using System.Runtime.InteropServices;
using UnityEngine;

namespace AndroidLib1
{
    public static class Class1
    {
        private const string LibraryName = "libSharedObject1.so";

        [DllImport(LibraryName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int MethodOpenCv();        

    }

    public class CvManager : MonoBehaviour 
    {
        private const string LibraryName = "libSharedObject1.so";

        [DllImport(LibraryName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int MethodOpenCv();

        [DllImport(LibraryName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void InitOpenCvFrame(int width, int height);

        [DllImport(LibraryName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void GetFeature(ref Color32[] rawData);

        Texture2D _cameraTexture;
        WebCamTexture _webCarmTexture;
        public TextureView _cameraImage;


        void Start()
        {
            _webCarmTexture = new WebCamTexture(640, 360, 30);
            _webCarmTexture.Play();
            _cameraTexture = new Texture2D(_webCarmTexture.width, _webCarmTexture.height);
        }

        void Update() 
        {
        }
    }
}