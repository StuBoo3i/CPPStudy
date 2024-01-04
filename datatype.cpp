//
// Created by Frank on 2024/1/4.
//
#include "datatype.h"
#include <iostream>

int test() {
    std::cout << "Hello, World!" << std::endl;
    /*
     * 数据类型是为了给变量分配一个合适的内存空间
     * 整型：short（2）int（4）long（4/8）long long（8）（单位为字节）
     */
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    std::cout << "1:" << num1 << "  2:" << num2 <<"  3:" << num3 <<"  4:" << num4 <<std::endl;
    //sizeof
    std::cout << "int 的占用内存大小"<< sizeof(num2) << "B" <<std::endl;//4
    std::cout << "short 的占用内存大小"<< sizeof(num1) << "B" <<std::endl;//2
    std::cout << "long 的占用内存大小"<< sizeof(num3) << "B" <<std::endl;//4
    std::cout << "long long 的占用内存大小"<< sizeof(num4) << "B" <<std::endl;//8
    //实型
    float num5 = 3.14159265358;
    double num6 = 3.14159265358;
    std::cout << "5:" << num5 << "   6:" << num6 <<std::endl;
    std::cout << "float 的占用内存大小"<< sizeof(num5) << "B" <<std::endl;//4
    std::cout << "double 的占用内存大小"<< sizeof(num6) << "B" <<std::endl;//8

    //字符型，不是去存储字符本身，而是将对应的ASCII编码放入存储单元，占用一个字节
    char ch = 'a';
    std::cout<< ch <<std::endl;
    std::cout << "char 的占用内存大小"<< sizeof(ch) << "B" <<std::endl;//1
    //创建是使用单引号，引号内只能有一个字符
    std::cout<< (int)ch <<std::endl;
    /*
     * 转移字符
     *
     * \+字母 例如：
     * 换行符\n 反斜杠\\ 制表符\t
    */
    /*
     * 字符串型
     * 1.c风格字符串
     * char 变量名[] = “字符串值”
     * 2.c++风格
     * string 变量名 = “字符串值”
     */
    char str[] = "Hello World";
    std::string arr = "Hello World";
    std::cout << "str:" << str << "   arr:" << arr <<std::endl;
    //布尔类型,0为false，1为true
    bool flag = true;
    std::cout<< flag <<std::endl;
    std::cout << "bool 的占用内存大小"<< sizeof(ch) << "B" <<std::endl;//1

    //输入
    int a = 0;
    std::cin>> a;
    std::cout<<  "a:" << a <<std::endl;

    std::string s = "";
    std::cin>>s;
    std::cout<<  "s:" << s <<std::endl;

    //算数运算符 + - * / % ++ --,两个小数不可以做取模运算
    //赋值运算符 = += -= *= /= %=
    //比较运算符 == != < > <= >=
    //逻辑运算符 ! && ||

    return 0;
}
