//
// Created by Frank on 2024/1/4.
//

#include "flowstructure.h"
#include <iostream>

int flow() {
    int a = 0;
    int i=0;
    int score = 0;
    int v1=10,v2=20,v3=0;
    //goto label;//goto跳转语句
    std::cin>> a;
    //选择结构
    if(a>600){
        if(a>650){
            std::cout<< "perfect" <<std::endl;
        }
        else{
            std::cout<< "excellent" <<std::endl;
        }
    }
    else if(a>500) {
        std::cout<< "qualified" <<std::endl;
    }
    else{
        std::cout<< "failed" <<std::endl;
    }
    //三目运算符
    v3 = (v1>v2?v1:v2);
    std::cout<< v3 <<std::endl;
    //三目运算符返回的是变量，可以继续赋值
    (v1<v2?v1:v2) = 100;
    std::cout<< v1 <<std::endl;
    std::cout<< v2 <<std::endl;
    //switch, 判断时只能是整形或字符型，不能是一个区间，但是机构清晰，执行效率高

    std::cin>>score;
    switch (score) {
        case 10:
            std::cout<< "perfect" <<std::endl;
            break;
        case 9:
            std::cout<< "perfect" <<std::endl;
            break;
        case 8:
            std::cout<< "excellent" <<std::endl;
            break;
        case 7:
            std::cout<< "excellent" <<std::endl;
            break;
        case 6:
            std::cout<< "excellent" <<std::endl;
            break;
        case 5:
            std::cout<< "qualified" <<std::endl;
            break;
        case 4:
            std::cout<< "qualified" <<std::endl;
            break;
        case 3:
            std::cout<< "qualified" <<std::endl;
            break;
        case 2:
            std::cout<< "qualified" <<std::endl;
            break;
        case 1:
            std::cout<< "qualified" <<std::endl;
            break;
        default:
            std::cout<< "failed" <<std::endl;
    }

    while (i<10){
        i++;
        std::cout<< i <<std::endl;
    }
    do
    {
        std::cout<< i <<std::endl;
        i--;
    }while(i>8);

    for(int j = 0;j < 4;j++){
        std::cout<< j <<std::endl;
    }

    for(int k = 0;k < 4;k++){
        std::cout<< "k?" ;
        if(k%2 == 0){
            continue;
        }
        std::cout<< k <<std::endl;
    }
    label:
    return 0;
}