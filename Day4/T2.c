#include "stdio.h"

// printf 输出字符串需要以'\0'结尾
int main(){
    // 正常情况
    printf("\n------正常情况------\n");
    //将字符串从全局区/静态区拷贝到栈空间。在栈空间操作
    char aar[] = {'J','i','a','T','i','a','n','L','o','n','g'};
    printf("第一种方式：%s\n",aar);
    printf("\n------------\n");

    // 这种方式，默认在最后加上\0 所以不会出问题
    // 将指针指向，全局区/静态区的地址。
    // 无法修改全局区的数据，会崩溃
    char * aar1 = "JiaTianLong";
    printf("第二种方式：%s\n",aar1);
    printf("\n------替换元素------\n");
    // 替换元素
//    aar1[3] = 'J';// 写这个会崩溃，无法修改全局区的数据
//    printf(aar1);

    int test[] = {1,2,3};
    printf("%d",*(test+2));
}