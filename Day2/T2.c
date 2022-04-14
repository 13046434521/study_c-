#include "stdio.h"

// 多级指针
int main(){
    int num = 999;
    int *p = &num;
    int ** p_p = &p;
    printf("p value %p\np_p value %p\n",p,p_p);
    // 多级指针才可以连续多次取值。
    // 如果是一级指针，即便他存放的是个指针，也不能连续取值：**p_p
    printf("p value %d\np_p value %d\n",*p,**p_p);
}
