C++使用纯虚函数的接口封装以及接口的调用方法。
## 程序说明
包含两个项目，image_processing 用来编译生成动态链接库和静态链接库，image_processing_test 用来调用前面封装好的库。程序最终功能是实现图像的灰度化操作和翻转操作。
## 文件说明
### image_processing
- image_processing.h：接口文件，供内部子类继承和外部调用
- image_processing_impl.h：继承抽象类的具体实现头文件
- image_processing_impl.cpp：继承抽象类的具体实现
- image_processing_factory.h：类的实例化封装，供外部调用
- image_processing_factory.cpp：类的实例化封装，供外部调用
### image_processing_test
- image_processing.dll：由库编译生成的动态链接库文件
- image_processing.lib：由库编译生成的静态链接库文件
- image_processing.h：接口文件，供内部子类继承和外部调用
- image_processing_factory.h：类的实例化封装，供外部调用
- demo.cpp：用户使用参考示例
## 使用方法
直接执行image_processing_test中的demo.cpp即可，image_processing只是提供了库的源码，编译出dll和lib之后直接给demo用就行了。
