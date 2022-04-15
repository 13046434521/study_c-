#include "stdio.h"
#include "stdlib.h"

// 动态开辟
// 改变内容
int main(){
    printf("请输入数组长度： \n");
    int num  ;
    scanf("%d", &num);

    printf("您输入的数是:%d\n",num);

    int* aar = malloc(sizeof (int)*num);
    for (int i = 0; i < num; ++i) {
        int temp;
        printf("请输入第%d个值：",i);
        scanf("%d",&temp);
        // aar[ i ] = * (aar + i);
        *(aar+i) = temp;// 指针内容赋值

        printf("输入的值：%d,地址是：%p\n",*(aar+i),aar+i);
    }

    // 释放内存
    // 避免悬空指针
    free(aar);
    aar = NULL;
}
