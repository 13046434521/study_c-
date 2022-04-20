#include "stdlib.h"
#include "stdio.h"
#include "string.h"


// 文件的写
int main(){
    // 路径 模式
    char* path = "G:\\ClionProject\\StudyC\\WRITE.md";
    char* mode="w";
    // 打开文件，没有创建
    FILE * file =fopen(path,mode);
    if(!file){
        printf("失败");
    }
    // 传入内容
    char * content = "test";
    // 传入数据
    fputs(content,file);

    // 关闭File
    fclose(file);
    return 0;
}
