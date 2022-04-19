#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
    // 字符串的转换
    char * num = "1";

    int data = atoi(num);
    // 转换失败为0
    if(data){
        printf("转换成功：%d",data);
    }

    // 字符串的比较
    char * name = "jtl";
    char * name1 = "jia";
    int res = strcmp(name,name1);
    // 返回-0代表相等，非0代表不相等
    if(!res){
        printf("两个相等");
    }else{
        printf("不相等");
    }


}
