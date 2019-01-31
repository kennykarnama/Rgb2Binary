
/*
Convert RGB Image to Binary Image
Currently implement only otsu method
Created by Kenny Karnama 
Github : github.com/kennykarnama
email  : kennykarnama@gmail.com
*/

#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#include "ImageStream.h"
#include "Helper.h"
#include "Averaging.h"
#include "Otsu.h"

int main(int argc, char **argv)
{
	char *rawInPath = argv[1];

	std::string inPath(rawInPath);

	ImageStream stream;	
	
	cv::Mat image = stream.read(inPath);

	Averaging averaging;

	cv::Mat grayscaleImage = averaging.convert(image);

	Otsu otsu;

	cv::Mat binarizedImage = otsu.convert(grayscaleImage);

	Helper::displayImage(binarizedImage, "binarized");
}