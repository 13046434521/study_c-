#include "stdio.h"
#include "stdlib.h"

// 动态开辟 realloc
int main(){

    int num ;
    printf("请输入个数：");

    scanf("%d",&num);

    int *aar = malloc(sizeof (int)* num);

    for (int i = 0; i < num; ++i) {
        int temp;
        printf("请输入第%d个数的值：\n",i);
        scanf("%d",&temp);

        *(aar+i) = temp;
        printf("第%d个数是：%d,地址是%p\n",i,*(aar+i),aar+i);
    }

    // realloc 重新开辟

    int newNum;
    printf("原有基础上扩充个数%d:\n");
    scanf("%d",&newNum);

    int* newAar = realloc(aar,sizeof (int) * (num+newNum));

    for (int i = 0; i < newNum; ++i) {
        int temp;
        printf("新增的第%d个数是：\n",i);
        scanf("%d",temp);

        printf("新增的第%d个数是%d,地址是：%p\n",*(aar+num+i),aar+num+i);




    }


}