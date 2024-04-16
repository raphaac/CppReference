#include "SharedObject1.h"
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/aruco/aruco_calib.hpp"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "SharedObject1", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "SharedObject1", __VA_ARGS__))

extern "C" {

	cv::Mat cameraFrame;

	void InitOpenCvFrame(int width, int height)
	{
		cameraFrame = cv::Mat(height, width, CV_8UC4);
	}

	void GetFeature(unsigned char** rawImage)
	{
		cameraFrame.data = *rawImage;
		cv::Mat grey;
		cvtColor(cameraFrame, grey, 10);

		std::vector<cv::Point2f> corners;

		cv::goodFeaturesToTrack(grey, corners, 20, 0.01, 10, cv::Mat(), 3, false, 0.04);

		for (size_t i = 0; i < corners.size(); i++)
		{
			cv::circle(cameraFrame, corners[i], 8, cv::Scalar(0, 255, 0, 0), 1);
		}
	}

	void TestAruco()
	{
		int valor = cv::aruco::ARUCO_CCW_CENTER;
	}

	/* This trivial function returns the platform ABI for which this dynamic native library is compiled.*/
	const char * SharedObject1::getPlatformABI()
	{
	#if defined(__arm__)
	#if defined(__ARM_ARCH_7A__)
	#if defined(__ARM_NEON__)
		#define ABI "armeabi-v7a/NEON"
	#else
		#define ABI "armeabi-v7a"
	#endif
	#else
		#define ABI "armeabi"
	#endif
	#elif defined(__i386__)
		#define ABI "x86"
	#else
		#define ABI "unknown"
	#endif
		LOGI("This dynamic shared library is compiled with ABI: %s", ABI);
		return "This native library is compiled with ABI: %s" ABI ".";
	}

	int MethodOpenCv()
	{
		cv::Mat img(10, 10, CV_8UC1);
		return img.rows;
	}

	void SharedObject1()
	{
	}

	SharedObject1::SharedObject1()
	{
	}

	SharedObject1::~SharedObject1()
	{
	}
}
