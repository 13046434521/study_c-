//2. 结构体定义与使用 第一种方法
// C语言 结构体相当于Java中的类
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "malloc.h"

struct Dog{
    //成员
    char name[10];
    int age;
    char sex;
};//必须有分号结尾。

int main(){
    struct Dog dog;//没有初始化的情况下，默认是系统值
    printf("name:%s,age:%d,sex:%c\n",dog.name,dog.age,dog.sex);
// 结构体的字符串数组赋值必须使用拷贝
//    dog.name="冰块"; // 数组不能直接赋值，指针可以
    strcpy(dog.name,"冰块");
    dog.age=1;
    dog.sex='M';
    printf("name:%s,age:%d,sex:%c\n",dog.name,dog.age,dog.sex);

    return 0;
}
