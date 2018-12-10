
#pragma once
//ÅòÕÍ¡¢¸¯Ê´¡¢¿ª²Ù×÷¡¢±Õ²Ù×÷¡¢¶¥Ã±²Ù×÷¡¢ºÚÃ±²Ù×÷
class Morphological
{
public:
	cv::Mat src;
	cv::Mat gray_src;
	cv::Mat EroDst;
	cv::Mat dilateDst;
	cv::Mat element;
	cv::Mat src_erode;
	cv::Mat src_dilate;
	cv::Mat blurDst;
	cv::Mat dstImg;
	cv::Mat open_dst;
	cv::Mat close_dst;
	cv::Mat universal_dst;
public:
	Morphological();
	Morphological(cv::Mat &src);
	cv::Mat getImage();
	void blur_demo();
	void dilate_demo();
	void erode_demo();
	void open_demo();
	void close_demo();
	void gradient_demo();
	void tophat_demo();
	void black_demo();
	void universal_demo();

	void show_demo(cv::Mat showImg);
	~Morphological();
};

