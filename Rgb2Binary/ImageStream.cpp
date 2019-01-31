#include "pch.h"
#include "ImageStream.h"

/*
Read image from source file
@param string inPath
*/
cv::Mat ImageStream::read(std::string inPath) {
	
	cv::Mat image = cv::imread(inPath);

	if (!image.data) {
		cv::Mat broken(320, 240, CV_8UC3, cv::Scalar(0, 0, 0));
		std::cout << "Error loading image" << std::endl;
		return broken;
	}

	return image;

}
/*
Not yet implemented
*/
std::string ImageStream::write(cv::Mat image, std::string fileName, std::string outPath) {
	return "";
}