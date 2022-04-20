#include "stdio.h"

typedef enum {
    JAVA=0,
    KT,
    CPP,
    C,
    PY,
}Lauguage;

int main(){
    Lauguage lauguage = KT;
    Lauguage  lauguage1 = C;
    printf("%d,%d",lauguage,lauguage1);
}