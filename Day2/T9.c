#include "stdio.h"

void callBackMethod(char* fileName,int current,int total){
    printf("fileName is %s %d/%d ",fileName,current,total);
}
// 定义函数指针
// 返回值(*方法名)(参数1，参数....)
void compress(void(*method)(char *,int,int),char* file,int current,int total){
    method(file,current,total);
}

int main(){
    char*  file = "jtl";

    compress(callBackMethod,file,30,100);
    printf("\n----------------------\n");
    // 第一种写法
    void(*call)(char*,int,int);
    call = callBackMethod;
    compress(call,file,30,100);

    printf("\n----------------------\n");
    // 第二种写法
    void(*call2)(char *,int,int) = callBackMethod;
    compress(call2,file,30,100);

}
