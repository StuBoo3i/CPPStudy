//
// Created by Frank on 2024/1/4.
//

#include "pointer.h"
#include <iostream>
int pointer(){
    /*
     * 指针：间接访问内存
     * 数据类型 * 变量名;
     */
    int a = 10;
    int *p = &a;
    std::cout<< p << std::endl;
    //通过解引用的方式来找到指针指向的内存：指针前加*号来表示解引用
    *p = 1000;
    std::cout<< a <<std::endl;
    std::cout<< *p <<std::endl;
    std::cout<< sizeof(p)<<std::endl;

    int *p1 = nullptr;        //指针变量初始化，空指针不可以进行访问，0~255内存的编号属于系统，不可访问
    int *p2 = (int *)0x1100;  //野指针，在程序中要避免

    /*
     * const修饰指针
     * 1.修饰指针：常量指针
     * 2.修饰常量：指针常量
     * 3.即修饰指针又修饰常量
     */
    int v1 = 10;
    int v2 = 10;
    int *p3 = &a;

    const int *p4 = &a;   //常量指针，指向可以改，指针指向的值不可以改。
    int *const p5 = &a;  //指针常量，指向不可以改，指针指向的值可以改。
    const int *const p6 = &a; //都不可以改

    //指针遍历数组
    int arr[]={1,2,1,3,1,4};
    int *p7 = arr;
    std::cout<< *p7 << std::endl;
    p7++;
    std::cout<< *p7 << std::endl;

    //要在传入的函数内修改变量，需要传入变量的地址，即通过指针，在函数内解引用进行修改。

    return 0;
}
