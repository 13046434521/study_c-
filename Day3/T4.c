#include "stdio.h"
#include "stdlib.h"

// 动态开辟
void dynamicAction(int size){
    //void* 可以任意转变成其他类型指针
    // p 是一个int * 类型的别名，指向通过malloc创建的内存地址
    int * p = (int*)malloc(size);

    printf("%p\n",p);
    free(p); // 释放内存，但是p依旧可以获取到地址，此时称为悬空指针
    p = NULL; // 避免悬空指针，指向NULL
    printf("%p\n",p);
}

int main(){

    while (2){
        dynamicAction(1024);
    }
    return 0;
}
