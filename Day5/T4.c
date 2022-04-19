// 结构体第二种写法：直接赋值

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct Person{
    char*name;
    char sex;
    int age;
} JTL = {"jtl",'M',29},
MG={"cx",'W',30},
DEFAULT;//没有赋值，都是默认值

int main(){
    printf("name:%s,age:%d,sex:%c\n",JTL.name,JTL.age,JTL.sex);
    printf("name:%s,age:%d,sex:%c\n",MG.name,MG.age,MG.sex);
    printf("name:%s,age:%d,sex:%c\n",DEFAULT.name,DEFAULT.age,DEFAULT.sex);


    return 0;
}