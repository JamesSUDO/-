// ----------------image_processing_impl.h----------------
// ʵ���ļ�������ӿ��ļ��ľ���ʵ�֣������ⷢ��

#pragma once

#include "image_processing.h"

// ������֮�ҶȻ�����
class CLASS_DECLSPEC ToGray : public Processing
{
public:
	void imageProcessing(cv::Mat image);

	cv::Mat getTheResult();

private:
	cv::Mat result_image;
};

// ������֮ˮƽ��ת����
class CLASS_DECLSPEC Flip : public Processing
{
public:
	void imageProcessing(cv::Mat image);

	cv::Mat getTheResult();

private:
	cv::Mat result_image;
};