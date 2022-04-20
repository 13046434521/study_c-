//
// Created by jiatianlong on 2022/4/20.
// 获取文件大小
//

#include "stdio.h"
#include "stdlib.h"


int main(){
    char* path = "C:\\Users\\Administrator\\CLionProjects\\untitled1\\Note.md";
    char *mode = "r";

    FILE  *file = fopen(path,mode);


    // 获取文件大小
    fseek(file,0,SEEK_END);
    long size = ftell(file);

    printf("多少个字节：%d\n",size);
    fclose(file);
    return 0;
}

