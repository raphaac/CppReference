#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	std::cout << "Ol� mundo";	

	auto filename = "./Imgs/Raphael.jpg";
	auto imagem = imread(filename);

	imshow("Imagem Raphael", imagem);

	waitKey();
}