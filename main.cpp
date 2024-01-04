#include <iostream>
#include "datatype.h"
#include "flowstructure.h"
//输出Hello world
/*
 * 多行注释
 */
//宏常量 不可修改
#define DAY 7

int main() {
    std::cout << "Hello, World!" << std::endl;
    //变量：方便我们管理内存
    //语法：数据类型 变量名=初值；
    int a = 10;
    std::cout <<"a:"<< a << std::endl;
    std::cout << DAY << std::endl;
    //count修饰变量也是常量
    const int month = 12;
    std::cout <<"month:"<< month << std::endl;
    //test();      //数据类型测试
    flow();     //程序流程结构
    return 0;

}
