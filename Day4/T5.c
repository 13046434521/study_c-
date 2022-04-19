#include "string.h"
#include "stdio.h"

// 查找，包含，拼接
int main(){

    char * name = "Jia Tian Long";
    char * data = "T";

    // 查找
    char * res1 =strstr(name,data);
    printf("%s",res1);
    // 包含
    if(res1){
        printf("包含\n");
    }
    // 位置：指针可以直接进行+/-(代表着指针指向的地址的+/-)
    // 不能 &res1 - &name：这个代表着获取res1这个指针的地址，而不是res1指向的内存地址
    //
    int index = res1 - name;
    printf("位置：%d,地址1：%p,地址2：%p\n",index,res1,name);

    // 拼接
    char destination[15];//容器
    char* blank ="--到--";
    char *CPP = "C++";
    char *JAVA="JAVA";
    strcpy(destination,CPP);// 拷贝
    strcat(destination,blank);// 拼接
    strcat(destination,JAVA);
    printf("拼接结果:%s\n",destination);
}
