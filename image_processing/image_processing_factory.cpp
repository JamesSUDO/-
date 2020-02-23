// -----------image_processing_factory.cpp-----------
// 创造实例头文件

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