// ----------------image_processing_impl.cpp----------------
// 实现文件，负责接口文件的具体实现，不对外发布

#include "image_processing_impl.h"

void ToGray::imageProcessing(cv::Mat image)
{
	cv::cvtColor(image, result_image, CV_RGB2GRAY);
}

cv::Mat ToGray::getTheResult()
{
	return result_image;
}

void Flip::imageProcessing(cv::Mat image)
{
	cv::flip(image, result_image, 1);
}

cv::Mat Flip::getTheResult()
{
	return result_image;
}