//
// Created by Frank on 2024/1/4.
//

#include "struct.h"
#include <iostream>

struct Student{
    std::string name;
    int age;
    int score;
}s3;

struct Teacher{
    int id;
    std::string name;
    int age;
    struct Student stu;
};

//add const provide struct Student from changed.
//形参改为指针可以节省复制用的内存空间，提升速率
void printStudent(const Student *stu){
    std::cout << stu->name << " " << stu->age << " " <<  stu->score <<  std::endl;
}

int info_struct(){
    /*
    * 1.struct Student s1;
    * 2.struct Student s2 = {.....};
    * 3.在定义时创建
    */
    struct Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    printStudent(&s1);

    struct Student s2 = {"李四", 19 , 99};
    printStudent(&s2);

    s3.name = "王五";
    s3.age = 20;
    s3.score = 98;
    printStudent(&s3);

    //struct array
    struct Student arr[3] = {
            s1,s2,s3,
    };
    printStudent(&arr[0]);

    //struct pointer
    struct Student *p = &s1;
    std::cout << p->name << " " << p->age << " " <<  p->score <<  std::endl;

    Teacher t = {1000,"王强",50,s1};
    std::cout << t.id << " " << t.name << " " <<  t.stu.name <<  std::endl;

    return 0;
}
