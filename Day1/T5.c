//
// Created by Administrator on 2022/4/14.
//
#include <stdio.h>

// 指针取值
int main(){
    int number_int = 100;
    double number_double = 200;
    printf("int value:%d\n",number_int);
    printf("double value:%lf\n",number_double);


    // 通过指针保存地址
    int * addr_int = &number_int;
    double * addr_double = &number_double;

    printf("int address:%p\n",addr_int);
    printf("double address:%p\n",addr_double);

    //通过指针取值
    //变量都是地址，可以通过地址获取值
    printf("int point value:%d\n",*addr_int);
    printf("double point value:%lf\n",*addr_double);

    // 内存地址 == 指针
    // 指针 == 内存地址
    // int * ：int 类型的指针
    // double * :double 类型的指针
    // & :取地址符
    // * :取值符
    // 指针别名，指针变量：指针类型的变量，addr_int，addr_double
}