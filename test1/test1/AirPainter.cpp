#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"


using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("Canvas.jpg", 1);
	namedWindow("image", CV_WINDOW_FREERATIO);
	imshow("image", image);
	waitKey(0);
	return 0;
}