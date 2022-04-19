
#include "stdio.h"
#include "stdlib.h"
struct Person{
    char*name;
};
// 结构体指针：malloc：动态开辟
int main(){
    struct Person * person = malloc(sizeof (struct Person));

    person->name = "jiatianlong";

    printf("name:%s\n",person->name);
}


