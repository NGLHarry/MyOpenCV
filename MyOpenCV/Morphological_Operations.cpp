#include <opencv2/opencv.hpp>
#include "Morphological.h"
#include "filter.h"
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
	system("color5E");
	Mat src;
	String path;
	int PicID;

	cout << "ÇëÑ¡ÔñÕÕÆ¬(1|2|other)" << endl;
	cin >> PicID;
	switch (PicID)
	{
	case 1:
		path = "F:/BaiduNetdiskDownload/Img/MyOpenCV/Cat.jpg";
		break;
	case 2:
		path = "F:/BaiduNetdiskDownload/Img/MyOpenCV/City.jpg";
		break;
	default:
		path = "F:/BaiduNetdiskDownload/Img/MyOpenCV/Sunflower.jpg";
		break;
	}

	src = imread(path);
	if (!src.data)
	{
		printf("Could not load the image...\n");
		return -1;
	}
/*	Morphological obj(src);

	obj.erode_demo();
	obj.blur_demo();
	obj.dilate_demo();
	obj.open_demo();
	obj.close_demo();
	obj.gradient_demo();
	obj.tophat_demo();
	obj.black_demo();
	obj.universal_demo();
*/

	filter obj;
	obj.setImg(src);
	imshow("ouput Image", obj.getImg());
	obj.boxFilter_demo();
	obj.meanFilter_demo();
	obj.GaussianBlur_demo();


	waitKey(0);
	return 0;
}
