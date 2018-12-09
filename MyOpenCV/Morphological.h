
#pragma once
//���͡���ʴ�����������ղ�������ñ��������ñ����
class Morphological
{
public:
	cv::Mat src;
	cv::Mat gray_src;
	cv::Mat EroDst;
	cv::Mat dilateDst;
	cv::Mat element;
	cv::Mat blurDst;
	cv::Mat dstImg;
public:
	Morphological();
	Morphological(cv::Mat &src);
	cv::Mat getImage();
	void dilate_demo();
	void erode_demo();
	void blur_demo();

	void show_demo();
	~Morphological();
};

