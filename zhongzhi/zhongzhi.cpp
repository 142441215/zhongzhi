#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cv::Mat dst;
	VideoCapture cap;
	cap.open(0);
	double fps = cap.get(CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;
	while (1)
	{
		cv::Mat frame;
		bool rSucess = cap.read(frame);
		medianBlur(frame, dst, 3);
			cv::imshow("frame ", frame);
			cv::imshow("dst ", dst);
		waitKey(30);

	}
	return 0;
}

