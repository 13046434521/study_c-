#include "stdio.h"

struct Cat{
    char*name;
    int age;
}Ice={"Ice",1};

// 结构体用'.'
// 结构体指针用'->'
int main(){
    // 结构体
    struct Cat cat = {"Cola",1};
    cat.age = 2;
    printf("name:%s,age:%d\n",cat.name,cat.age);

    // 结构体指针
    struct Cat* cat1 = &Ice;
    cat1->age = 3;
    printf("name:%s,age:%d\n",cat1->name,cat1->age);
}