#include "stdio.h"

enum LAUGUAGE{
    CPP=1,
    JAVA,
    KT,
    PYTHON
};

typedef enum LAUGUAGE LAUGUAGE;

typedef enum {
    CHINA =1,
    RUSS,
    FRANCE,
}country;
int main(){
    // VS中写法： LAUGUAGE lauguage = JAVA;
    // CLion中写法： enum LAUGUAGE lauguage = JAVA;

    LAUGUAGE lauguage =JAVA;
    LAUGUAGE lauguage1 =KT;
    LAUGUAGE lauguage2=PYTHON;
    country c = CHINA;
    printf("%d,%d,%d",lauguage,lauguage1,lauguage2);
}