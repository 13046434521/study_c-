#include "stdio.h"
//数组指针操作的几种方式
int main(){
    int aar [] = {100,50,99,711};

    int * aarP = aar;
    for (int i = 0; i < 4; ++i) {
        printf("value %d\n",aarP[i]); // 用的很少的方式
        printf("value %d\n",*(aarP+i) );// 挪动指针后，取值
    }
}
