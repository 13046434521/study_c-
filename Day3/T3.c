#include "stdlib.h"
//2.静态开辟
int main(){
    // 40M 会溢出
    //int aar[(int) (0.4 * 1024 * 1024)];
    int aar[(int) (0.4 * 1024 * 1024)];//不会溢出
    //栈区：占用内存大约2M，和平台有关系
    //堆区：占用内存大小 最大值
    return (0);
}

