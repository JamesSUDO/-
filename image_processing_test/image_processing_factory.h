// -----------image_processing_factory.h-----------
// 创造实例头文件,对外发布

#pragma once

#include "image_processing.h"

class CLASS_DECLSPEC ToGrayFactory  // 根据image_processing.h 定义这个是导入还是导出（外部导入，内部导出），下同理
{
public:
	Processing* create();  // 提供一个创建对象的方法   
};

class CLASS_DECLSPEC FlipFactory
{
public:
	Processing* create();  // 提供一个创建对象的方法   
};