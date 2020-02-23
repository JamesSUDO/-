// ----------demo.cpp----------
// 调用封装库实现对图片的操作
#include <opencv2/opencv.hpp>
#include "image_processing_factory.h"

int main()
{
	ToGrayFactory factory_gray;  // 用户接口
	FlipFactory factory_flip;  // 用户接口
	Processing* processor_gray = factory_gray.create();  //创建灰度操作对象
	Processing* processor_flip = factory_flip.create();  //创建翻转操作对象

	cv::Mat orig_image = cv::imread("D:/test_image.jpg");
	cv::imshow("orig_image", orig_image);

	processor_gray->imageProcessing(orig_image);
	cv::imshow("gray_image", processor_gray->getTheResult());

	processor_flip->imageProcessing(orig_image);
	cv::imshow("flip_image", processor_flip->getTheResult());

	cv::waitKey(0);

	return 0;
}