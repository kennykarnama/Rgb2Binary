#ifndef OTSU_H
#define OTSU_H

#include "Thresholding.h"
#include <opencv2/opencv.hpp>

class Otsu : public Thresholding
{
public:
	
	cv::Mat convert(cv::Mat);

private:
	double getOtsuValue(cv::Mat img);

};


#endif
