#ifndef AVERAGING_H
#define AVERAGING_H

#include <opencv2/opencv.hpp>
#include "GrayscaleConverter.h"

class Averaging : public GrayscaleConverter
{
public:
	virtual cv::Mat convert(cv::Mat);
};

#endif
