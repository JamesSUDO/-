// ------------------image_processing.h------------------
// 这个是对外发布的接口，这个文件里只包含对外提供的方法，不会包含私有方法和属性

#pragma once

#include <opencv2/opencv.hpp>

// 注：如果用到了.def来配置生成dll，则可以用下面被注释掉的代码
//#ifdef _EXPORTING
//#define CLASS_DECLSPEC __declspec(dllexport)
//#else
//#define CLASS_DECLSPEC __declspec(dllimport)
//#endif

#define CLASS_DECLSPEC __declspec(dllexport)  // 表示这里要把类导出

// 基类
class Processing  // 这个类是对外发布的，所有方法均是纯虚的，不会暴露实现
{
public:
	// 提供接口框架的纯虚函数
	virtual void imageProcessing(cv::Mat image) = 0;  // 图像处理

	virtual cv::Mat getTheResult() = 0;  // 输出成员变量

// 这里最好不要出现私有成员变量，因为只是接口作用，不暴露实现，成员变量可以在具体实现头文件定义
};