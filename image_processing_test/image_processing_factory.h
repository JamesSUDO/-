// -----------image_processing_factory.h-----------
// ����ʵ��ͷ�ļ�,���ⷢ��

#pragma once

#include "image_processing.h"

class CLASS_DECLSPEC ToGrayFactory  // ����image_processing.h ��������ǵ��뻹�ǵ������ⲿ���룬�ڲ�����������ͬ��
{
public:
	Processing* create();  // �ṩһ����������ķ���   
};

class CLASS_DECLSPEC FlipFactory
{
public:
	Processing* create();  // �ṩһ����������ķ���   
};