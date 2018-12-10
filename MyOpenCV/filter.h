#include <opencv2/opencv.hpp>
#pragma once
//�����˲��������˲�����ֵ�˲�����˹�˲�

class filter
{
public:
	cv::Mat src;
	cv::Mat boxDst;
	cv::Mat meanDst;
	cv::Mat gaussianDst;
	

public:
	void setImg(cv::Mat &src);
	cv::Mat getImg();
public:
	filter();
	
	void boxFilter_demo();
	void meanFilter_demo();
	void GaussianBlur_demo();

	~filter();
};


