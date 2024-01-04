//
// Created by Frank on 2024/1/4.
//

#include "array.h"
#include <iostream>

int array() {
    /*
     * 数组中的数据元素类型都相同，数组是由连续的内存位置组成的
     * 1.数据类型 数组名[数据长度];
     * 2.数据类型 数组名[数据长度] = {值1,值2,...};
     * 3.数据类型 数组名[] = {值1,值2,...};
     *
     * 数组名用途
     * 1.统计数组长度
     * 2.获取首地址
    */
    //实现数组逆置
    int arr[] = {1,3,2,5,4,};
    for (int i = 0; i < 5; i++) {
        std::cout<<arr[i]<<std::endl;
    }
    int start = 0;
    int end = sizeof(arr)/ sizeof(arr[0])-1;

    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    std::cout<<"arr[]:"<<std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout<<arr[i]<<std::endl;
    }

    return 0;
}
