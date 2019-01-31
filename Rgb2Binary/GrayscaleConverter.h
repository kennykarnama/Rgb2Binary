#ifndef GRAYSCALE_CONVERTER_H
#define GRAYSCALE_CONVERTER_H

#include <opencv2/opencv.hpp>
class GrayscaleConverter
{
public:
	/*
	Convert rgb image to grayscale img
	*/
	virtual cv::Mat convert(cv::Mat) = 0;
};

#endif // !GRAYSCALE_CONVERTER_H
#pragma once
