#ifndef IMAGE_STREAM_H
#define IMAGE_STREAM_H

#include <opencv2/opencv.hpp>
#include <string>

/*
Class to handle opencv Mat stream
read and write
*/
class ImageStream
{

public:

	/*
	Read from source path 
	@param string in destination
	*/
	static cv::Mat read(std::string);
	/*
	Write to file
	@param Mat image
	@param string filename
	@param out path
	*/
	static std::string write(cv::Mat, std::string, std::string);

private:

};
#endif // !IMAGE_STREAM_H
#pragma once
