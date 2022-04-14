
#include "stdio.h"

// 数组指针移动

int main(){
    int aar[]  = {1,2,3,4};
    int i =0;
    int length = sizeof(aar)/sizeof (aar[0]);

    for (i = 0; i < length; ++i) {
        printf("value %d\n",aar[i]);
        printf("adress %p\n",&aar[i]);
    }
    printf("---------------\n");

    // 数组是连续的内存
    int *p = &aar;
    for (i = 0; i < length; ++i) {
        printf("value %d\n",*p);
        printf("adress %p\n",p);
        p+=1;// 因为是int型指针，每次内存移动4个字节
    }
}
