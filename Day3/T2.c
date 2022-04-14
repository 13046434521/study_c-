#include "stdio.h"
#include "stdlib.h"
#include "time.h"
// 查看C函数手册
void main(){

    srand(time(NULL));
    printf("Ten random numbers from 0 to 99\n\n");
    int i=0;
    for(i=0; i<10; i++){
        printf("%d\n", rand() % 100);
    }
}
