#include <quickopencv.h>

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