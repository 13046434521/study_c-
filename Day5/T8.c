#include "stdlib.h"
#include "stdio.h"

struct Dog{
    char*name;
}hl={"harry"};

typedef struct Dog Doa;
typedef Doa* dog_p;


// typedef  定义别名
// VS中结构体：Dog dog; //不需加关键字struct
// Clion中：struct Dog dog;// 需加关键字struct
int main(){
    Doa * doa = &hl ;
    doa->name="botte";
    printf("%s\n",doa->name);

    Doa doa1 = {"potter"};
    dog_p dogP = &doa1;
    dogP->name="luo";
    printf("%s---%s\n",doa1.name,dogP->name);
}