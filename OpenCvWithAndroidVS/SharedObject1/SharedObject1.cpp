#include "SharedObject1.h"
#include <opencv2\core.hpp> // use OpenCV in this C++ Android Library

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "SharedObject1", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "SharedObject1", __VA_ARGS__))

extern "C"
{
    int methodOpenCv()
    {
        cv::Mat img(10, 10, CV_8UC1);
        return img.rows;
    }

	const char* SharedObject1::getPlatformABI()
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

	void SharedObject1()
	{
	}

	int Test()
	{
		return 100;
	}

	SharedObject1::SharedObject1()
	{
	}

	SharedObject1::~SharedObject1()
	{
	}
}