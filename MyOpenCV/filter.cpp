#include "filter.h"

void filter::setImg(cv::Mat &src)
{
	this->src = src;
}
cv::Mat filter::getImg()
{
	return this->src;
}
void filter::boxFilter_demo()
{
	cv::boxFilter(src, boxDst, -1, cv::Size(5,5), cv::Point(-1, -1));
	printf("the depth is :%d\n", boxDst.depth());
	imshow("boxFilter_demo", boxDst);
}
void filter::meanFilter_demo()
{
	cv::blur(src, meanDst, cv::Size(5,5), cv::Point(-1, -1));
	imshow("meanFilter_demo", meanDst);
}
void filter::GaussianBlur_demo()
{
	cv::GaussianBlur(src, gaussianDst, cv::Size(5, 5), 0, 0);
	imshow("GaussianBlur_demo", gaussianDst);
}

filter::filter()
{

}

filter::~filter()
{
}



