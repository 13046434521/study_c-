//
// Created by jiatianlong on 2022/4/20.
//

#include "stdio.h"
#include "stdlib.h"

// 拷贝文件
int main() {
    char *path = "G:\\ClionProject\\StudyC\\WRITE.md";
    char *mode = "rb";
    FILE *file = fopen(path, mode);


    char *copyPath = "G:\\ClionProject\\StudyC\\COPY.md";
    char *copyMode = "wb";
    FILE *copyFile = fopen(copyPath, copyMode);
    if (!file || !copyFile) {
        printf("有错误:%d,%d", file, copyFile);
        return 0;
    }

    char *data = malloc(4 * 1024 * 1024);
    while (fread(data, sizeof(char), sizeof(4 * 1024 * 1024), file)) {
        fwrite(data, sizeof(char), sizeof(4 * 1024 * 1024), copyFile);
    }

    free(data);
    data = NULL;

    fclose(file);
    fclose(copyFile);
}
