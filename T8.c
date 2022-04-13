#include "stdio.h"

// 只接受指针（内存地址）
void change(int * a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 100;
    int b = 200;
    change(&a,&b);

    printf("value,a:%d,b:%d\n",a,b);
}
