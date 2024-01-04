//
// Created by Frank on 2024/1/4.
//
#include "datatype.h"
#include <iostream>

int test() {
    std::cout << "Hello, World!" << std::endl;
    /*
     * ����������Ϊ�˸���������һ�����ʵ��ڴ�ռ�
     * ���ͣ�short��2��int��4��long��4/8��long long��8������λΪ�ֽڣ�
     */
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    std::cout << "1:" << num1 << "  2:" << num2 <<"  3:" << num3 <<"  4:" << num4 <<std::endl;
    //sizeof
    std::cout << "int ��ռ���ڴ��С"<< sizeof(num2) << "B" <<std::endl;//4
    std::cout << "short ��ռ���ڴ��С"<< sizeof(num1) << "B" <<std::endl;//2
    std::cout << "long ��ռ���ڴ��С"<< sizeof(num3) << "B" <<std::endl;//4
    std::cout << "long long ��ռ���ڴ��С"<< sizeof(num4) << "B" <<std::endl;//8
    //ʵ��
    float num5 = 3.14159265358;
    double num6 = 3.14159265358;
    std::cout << "5:" << num5 << "   6:" << num6 <<std::endl;
    std::cout << "float ��ռ���ڴ��С"<< sizeof(num5) << "B" <<std::endl;//4
    std::cout << "double ��ռ���ڴ��С"<< sizeof(num6) << "B" <<std::endl;//8

    //�ַ��ͣ�����ȥ�洢�ַ��������ǽ���Ӧ��ASCII�������洢��Ԫ��ռ��һ���ֽ�
    char ch = 'a';
    std::cout<< ch <<std::endl;
    std::cout << "char ��ռ���ڴ��С"<< sizeof(ch) << "B" <<std::endl;//1
    //������ʹ�õ����ţ�������ֻ����һ���ַ�
    std::cout<< (int)ch <<std::endl;
    /*
     * ת���ַ�
     *
     * \+��ĸ ���磺
     * ���з�\n ��б��\\ �Ʊ��\t
    */
    /*
     * �ַ�����
     * 1.c����ַ���
     * char ������[] = ���ַ���ֵ��
     * 2.c++���
     * string ������ = ���ַ���ֵ��
     */
    char str[] = "Hello World";
    std::string arr = "Hello World";
    std::cout << "str:" << str << "   arr:" << arr <<std::endl;
    //��������,0Ϊfalse��1Ϊtrue
    bool flag = true;
    std::cout<< flag <<std::endl;
    std::cout << "bool ��ռ���ڴ��С"<< sizeof(ch) << "B" <<std::endl;//1

    //����
    int a = 0;
    std::cin>> a;
    std::cout<<  "a:" << a <<std::endl;

    std::string s = "";
    std::cin>>s;
    std::cout<<  "s:" << s <<std::endl;

    //��������� + - * / % ++ --,����С����������ȡģ����
    //��ֵ����� = += -= *= /= %=
    //�Ƚ������ == != < > <= >=
    //�߼������ ! && ||

    return 0;
}
