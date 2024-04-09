#pragma once

//extern "C"
//{
//    namespace SharedObject1
//    {
//        float Foopluginmethod();
//    }
//}

class SharedObject1
{
public:
	const char* getPlatformABI();
	SharedObject1();
	~SharedObject1();
};