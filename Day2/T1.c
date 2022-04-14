#include "stdio.h"

void change(int * p);

int main(){
    int i =100;

    change(&i);
    printf("%d",i);

    return 0;
}


// 相当于创建了一个新的指针变量p 存放i的地址
// 但是指针变量p 有自己的内存地址
void change(int *p){
    *p = 200;
}
