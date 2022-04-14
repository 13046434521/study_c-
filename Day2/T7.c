#include "stdio.h"

// 指针类型的作用
int main(){
    int a = 100;
    int * intP = &a;
    double * doubleP = intP;
    // 指针占用内存大小：4字节或者8字节
    // 32位系统:4字节
    // 64位系统:8字节
    printf("int pointer size:%p\n", sizeof(intP));
    printf("double pointer size:%p\n",sizeof(doubleP));

    // 指针类型的作用
    // 每次指针偏移时，在内存中移动几个字节
    // intP = intP+1; 在内存中偏移4个字节
    // doubleP = doubleP+1; 在内存中偏移8个字节
}