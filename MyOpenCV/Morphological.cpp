#include <opencv2/opencv.hpp>
#include "Morphological.h"

//using namespace cv;

Morphological::Morphological()
{
	
}
//»Ò¶È»¯
Morphological::Morphological(cv::Mat &src)
{
	this->src = src;
	cvtColor(this->src, gray_src, cv::COLOR_BGR2GRAY);
	element = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5), cv::Point(-1, -1));
}

cv::Mat Morphological::getImage()
{
	return this->gray_src;
}
//Ä£ºý
void Morphological::blur_demo()
{
	blur(src, blurDst, cv::Size(5, 5), cv::Point(-1, -1), 2);
	imshow("blur Demo", blurDst);
}

//ÅòÕÍ
void Morphological::dilate_demo()
{
	
	dilate(src, dilateDst, element, cv::Point(-1, -1), 2, cv::BORDER_CONSTANT);
	imshow("dilateDst", dilateDst);
}

//¸¯Ê´
void Morphological::erode_demo()
{
	erode(src, EroDst, element);
	imshow("Erode Demo", EroDst);
}

void Morphological::open_demo()
{
	erode(src,src_erode,element,cv::Point(-1,-1),1);
	dilate(src_erode, open_dst, element, cv::Point(-1, -1));
	show_demo(open_dst);
}
void Morphological::close_demo()
{
	dilate(src, src_dilate, element, cv::Point(-1, -1));
	erode(src_dilate, close_dst, element, cv::Point(-1, -1));
	//show_demo(close_dst);
}
void Morphological::gradient_demo()
{
	cv::Mat gradient_dst = dilateDst - EroDst;
	imshow("gradient_demo",gradient_dst);
}
void Morphological::tophat_demo()
{
	cv::Mat tophat_dst = src - open_dst;
	imshow("tophat_demo", tophat_dst);

}
void Morphological::black_demo()
{
	cv::Mat black_dst = close_dst - src;
	imshow("black_demo",black_dst);
}
void Morphological::universal_demo()
{
	cv::morphologyEx(src, universal_dst, cv::MORPH_GRADIENT, element);
	cv::imshow("universal_demo show", universal_dst);
}
void Morphological::show_demo(cv::Mat showImg)
{
	imshow("output Image",showImg);
}




Morphological::~Morphological()
{
}
