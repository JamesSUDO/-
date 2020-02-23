// ----------------image_processing_impl.h----------------
// 实现文件，负责接口文件的具体实现，不对外发布

#pragma once

#include "image_processing.h"

// 派生类之灰度化操作
class CLASS_DECLSPEC ToGray : public Processing
{
public:
	void imageProcessing(cv::Mat image);

	cv::Mat getTheResult();

private:
	cv::Mat result_image;
};

// 派生类之水平翻转操作
class CLASS_DECLSPEC Flip : public Processing
{
public:
	void imageProcessing(cv::Mat image);

	cv::Mat getTheResult();

private:
	cv::Mat result_image;
};