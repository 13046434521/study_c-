#include "stdio.h"

// 昨天回顾
void add(int i,int j){
    printf("i+j=%d\n",i+j);
}

// 函数指针
void test(void(*p)(int,int)){
    p(9,9);
    (*p)(9,9);
}

int main(){
    // 直接使用指针函数
    test(add);
    // 定义指针函数
    void (*testP)(int,int) = add;
    // 使用指针函数1
    testP(9,9);
    // 使用指针函数2
    (*testP)(9,9);
}

