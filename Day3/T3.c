#include <unistd.h>
#include <stdio.h>
#include "stdlib.h"
//2.静态开辟
//出栈时会自动销毁内存
void startAction(){
    int aar[5];

    for (int i = 0; i < 5; ++i) {
        printf("%p\n",aar+i);
    }
}

int main(){
    //40M 会溢出
    //int aar[(int) (0.4 * 1024 * 1024)];
    int aar[(int) (0.4 * 1024 * 1024)];//不会溢出
    //栈区：占用内存大约2M，和平台有关系
    //堆区：占用内存大小 最大值：系统给编译器的内存的80%

    while (2){
        startAction();
        sleep(1);
    }

    return (0);
}