#include "stdio.h"

// 循环给数组赋值
int main(){
    int aar[4] ;
    int i =0;
    int length = sizeof(aar)/ sizeof(aar[0]);
    int * aarP = &aar;
    for (i=0;i<length;i++){
        *aarP = 10000+i;//将地址中的数据赋值为10000+i：
        aarP+=1;// 指针后移一位

        printf("value :%d\n",aar[i]);
    }
}

