#include "pch.h"
#include "Otsu.h"

/*
Convert grayscale image to binary image
using otsu method
@param Mat grayScaleImage
*/
cv::Mat Otsu::convert(cv::Mat grayscaleImg) {
		
		double t = getOtsuValue(grayscaleImg);

		int row = grayscaleImg.rows;

		int col = grayscaleImg.cols;

		cv::Mat threshedImg(row, col, CV_8UC1, cv::Scalar::all(0));

		for (int i = 0; i < row; i++) {

			for (int j = 0; j < col; j++) {

				cv::Scalar intensity = grayscaleImg.at<uchar>(i, j);

				int val = (int)intensity.val[0];

				if (val > t) {
					val = 255;

				}

				else {
					val = 0;


				}

				threshedImg.at<uchar>(i, j) = val;

			}
		}

		return threshedImg;
	}

/*
Get otsu value for threshold
@param Mat img
*/
double Otsu::getOtsuValue(cv::Mat img){

		std::vector<int> histogram;

		int row = img.rows;

		int col = img.cols;

		//init

		for (int i = 0; i < 256; i++) {
			histogram.push_back(0);
		}

		// count histogram

		for (int r = 0; r < row; r++) {

			for (int c = 0; c < col; c++) {

				cv::Scalar intensity = img.at<uchar>(r, c);

				int val = (int)intensity.val[0];

				histogram[val]++;
			}

		}

		double sum = 0;
		double sumB = 0;
		double q1 = 0;
		double q2 = 0;
		double u1 = 0;
		double u2 = 0;
		double N = row * col;

		double var_max = 0;

		double var = 0;

		double threshold = -1;


		for (int l = 0; l < 256; l++) {
			sum += l * histogram.at(l);
		}

		for (int t = 0; t < 256; t++) {

			q1 += histogram[t];

			if (q1 == 0) {
				continue;
			}

			q2 = N - q1;

			sumB += t * histogram[t];

			u1 = (sumB*1.0) / (q1*1.0);

			u2 = ((sum - sumB)*1.0) / (q2*1.0);

			double a = q1 * q2;

			double b = pow((u1 - u2), 2);

			var = a * b;

			if (var > var_max) {
				var_max = var;
				threshold = t;
			}


		}

		return threshold;
	}

