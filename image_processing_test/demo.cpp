// ----------demo.cpp----------
// ���÷�װ��ʵ�ֶ�ͼƬ�Ĳ���
#include <opencv2/opencv.hpp>
#include "image_processing_factory.h"

int main()
{
	ToGrayFactory factory_gray;  // �û��ӿ�
	FlipFactory factory_flip;  // �û��ӿ�
	Processing* processor_gray = factory_gray.create();  //�����ҶȲ�������
	Processing* processor_flip = factory_flip.create();  //������ת��������

	cv::Mat orig_image = cv::imread("D:/test_image.jpg");
	cv::imshow("orig_image", orig_image);

	processor_gray->imageProcessing(orig_image);
	cv::imshow("gray_image", processor_gray->getTheResult());

	processor_flip->imageProcessing(orig_image);
	cv::imshow("flip_image", processor_flip->getTheResult());

	cv::waitKey(0);

	return 0;
}