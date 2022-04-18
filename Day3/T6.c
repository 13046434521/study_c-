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
        printf("请输入第%d个数的值：",i);
        scanf("%d",&temp);

        *(aar+i) = temp;
        printf("第%d个数是：%d,地址是%p\n",i,*(aar+i),aar+i);
    }

    // realloc 重新开辟

    int newNum;
    printf("原有基础上扩充个数:");
    scanf("%d",&newNum);

    int* newAar =(int *) realloc(aar,sizeof (int) * (num+newNum));
    // sizeof(aar) 这里注意，这个算的是指针的大小，而不是数据的大小。
    // 可能为NULL,代表开辟内存失败
    if(newAar){
        for (int i = 0; i < newNum; ++i) {
            int temp;
            printf("新增的第%d个数是：",i);
            scanf("%d",&temp);
            *(aar+num+i) = temp;
            printf("新增的第%d个数是%d,地址%p：\n",i,*(newAar+num+i),newAar+num+i);
        }

        for (int i = 0; i <num+newNum ; ++i) {
            printf("第%d个数是%d,地址是：%p\n",i,*(newAar+i),newAar+i);
        }
    }

    // 内存释放，避免悬空指针
    if(newAar){
        free(newAar);
        newAar = NULL;
    }
    else if(aar){
        free(aar);
        aar = NULL;
    }
}