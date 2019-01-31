#ifndef THRESHOLDING_H
#define THRESHOLDING_H

#include <opencv2/opencv.hpp>

class Thresholding
{
public:
	/*
	convert rgb image to binary image
	*/
	virtual cv::Mat convert(cv::Mat) = 0;

};


#endif // !THRESHOLDING_H
#pragma once
