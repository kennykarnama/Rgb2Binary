#include "pch.h"
#include "Helper.h"

/*
Display image 
@param Mat image
@param string windowName
*/
void Helper::displayImage(cv::Mat image, std::string windowName) {
	cv::namedWindow(windowName);
	cv::imshow(windowName, image);
	cv::waitKey(0);
}