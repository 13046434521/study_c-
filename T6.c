#include "stdio.h"

// 通过指针修改值
int main(){
    int i =100;
    int * p = &i;
    i = 200;

    // p 存放的是i的地址
    // i的值修改为200
    // 从地址p中获取值，应该是200
    printf("i valuie :%d\n",*p);

    // 将地址p中的值修改为300
    *p = 300;
    printf("i valuie :%d\n",*p);

    return 0;
}