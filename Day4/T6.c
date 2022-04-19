#include "stdio.h"
#include "ctype.h"

void lower(char* dest,char* src);

int main(){
    char res [25];
    char *name ="Jia Tian Long";
    lower(res,name);

    printf("result : %s",res);
}
// 不管是指针还是数组，都被优化成指针
void lower(char* dest,char* src){
    char * temp = src;
    while (*temp){
        *dest = tolower(*temp);//传的是地址
        dest++;
        temp++;
    }
    *dest = '\0';//需加上'\0'
}

