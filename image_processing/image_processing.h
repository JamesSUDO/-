// ------------------image_processing.h------------------
// ����Ƕ��ⷢ���Ľӿڣ�����ļ���ֻ���������ṩ�ķ������������˽�з���������

#pragma once

#include <opencv2/opencv.hpp>

// ע������õ���.def����������dll������������汻ע�͵��Ĵ���
//#ifdef _EXPORTING
//#define CLASS_DECLSPEC __declspec(dllexport)
//#else
//#define CLASS_DECLSPEC __declspec(dllimport)
//#endif

#define CLASS_DECLSPEC __declspec(dllexport)  // ��ʾ����Ҫ���ർ��

// ����
class Processing  // ������Ƕ��ⷢ���ģ����з������Ǵ���ģ����ᱩ¶ʵ��
{
public:
	// �ṩ�ӿڿ�ܵĴ��麯��
	virtual void imageProcessing(cv::Mat image) = 0;  // ͼ����

	virtual cv::Mat getTheResult() = 0;  // �����Ա����

// ������ò�Ҫ����˽�г�Ա��������Ϊֻ�ǽӿ����ã�����¶ʵ�֣���Ա���������ھ���ʵ��ͷ�ļ�����
};