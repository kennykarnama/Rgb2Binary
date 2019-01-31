#include "pch.h"
#include "Averaging.h"

/*
Convert rgb image to grayscale
by using average method
@param Mat RGB Image
*/
cv::Mat Averaging::convert(cv::Mat rgbImage) {
		int row = rgbImage.rows;

		int col = rgbImage.cols;

		cv::Mat grayImage(row, col, CV_8UC1, cv::Scalar(0));

		//convert Mat to IlPlimage

		IplImage tmp = grayImage;

		// iterate 

		for (int i = 0; i < row; i++) {

			for (int j = 0; j < col; j++) {


				//get ptr to pixel
				cv::Vec3b intensity = rgbImage.at<cv::Vec3b>(i, j);

				uchar blue = intensity.val[0];

				uchar green = intensity.val[1];

				uchar red = intensity.val[2];

				int avg = ((int)red + (int)green + (int)blue) / 3;

				grayImage.at<uchar>(i, j) = avg;


			}
		}
		return grayImage;
	}
