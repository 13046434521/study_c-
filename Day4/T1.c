#include "stdio.h"

// C指针的题目
int main(){
    int aarInt[] = {6,4,8,3,1,2,9,7,0,5};
    int result = aarInt[*aarInt+*(aarInt+4)];
    printf("result:%d",result);
    return 0;
}