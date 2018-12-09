#include <opencv2/opencv.hpp>
#include "Morphological.h"



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

//Ä£ºý
void Morphological::blur_demo()
{
	blur(src, blurDst, cv::Size(5, 5), cv::Point(-1, -1), 2);
	imshow("blur Demo", blurDst);
}
void Morphological::show_demo()
{
	dstImg = src.clone();
	imshow("output Image", dstImg);
}
Morphological::~Morphological()
{
}
