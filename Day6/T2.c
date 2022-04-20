#include "stdlib.h"
#include "stdio.h"
#include "string.h"


int main(){
    char* path = "G:\\ClionProject\\StudyC\\README.md";
    char* mode="r";
    //fopen:第一个参数：路径 path      第二个参数：模式 只读："r",只写"w",二进制读："rb",二进制写："wb";
    // 返回0 代表打开失败
    FILE * file = fopen(path,mode);

    if(!file){
        printf("打开失败,请检查目录:%s，是否正确",path);
    }

    // 申请空间用来缓存数据
    char* buffer = malloc(10);

    // 将文件中的数据保存到缓冲区中
    fgets(buffer,10,file);
    printf("%s",buffer);

    // 关闭File
    fclose(file);
    // 释放申请的空间
    free(buffer);
    buffer=NULL;

    return 0;
}
