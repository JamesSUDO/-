// -----------image_processing_factory.cpp-----------
// ����ʵ��ͷ�ļ�

#include "image_processing_factory.h"
#include "image_processing_impl.h"

Processing* ToGrayFactory::create()
{
	return new ToGray;
}

Processing* FlipFactory::create()
{
	return new Flip;
}