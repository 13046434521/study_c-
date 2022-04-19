#include "stdlib.h"
#include "stdio.h"

struct Dog{
    char*name;
}hl={"harry"};

typedef struct Dog Doa;


int main(){
    Doa * doa = &hl ;
    doa->name="botte";
    printf("%s",doa->name);
}