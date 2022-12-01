#include <quickopencv.h>

using namespace std;
using namespace cv;

void QuickDemo::colorSpace_Demo(Mat &image)
{
	Mat gry, hsv;
	cvtColor(image, hsv, COLOR_BGR2HSV);
	cvtColor(image, gry, COLOR_BGR2GRAY);
	imshow("HSV", hsv);
	imshow("huidu", gry);
	imwrite("./image/hsv.png", hsv);
	imwrite("./image/gry.png", gry);
}

void QuickDemo::matCreation_Demo(Mat &image)
{
	Mat c1, c2;
	c1 = image.clone();
	image.copyTo(c2);

	// 创建空白图像
	Mat m3 = Mat::zeros(Size(8, 8), CV_8UC3);  // 8位无符号char型数据 单通道
	m3 = Scalar(12, 123, 14);
	cout << "width: " << m3.cols << "height: " << m3.rows << "channels: " << m3.channels() <<endl;

	cout << m3;

}