#include "stdio.h"
#include "stdlib.h"

// ��̬���� realloc
int main(){

    int num ;
    printf("�����������");

    scanf("%d",&num);

    int *aar = malloc(sizeof (int)* num);

    for (int i = 0; i < num; ++i) {
        int temp;
        printf("�������%d������ֵ��\n",i);
        scanf("%d",&temp);

        *(aar+i) = temp;
        printf("��%d�����ǣ�%d,��ַ��%p\n",i,*(aar+i),aar+i);
    }

    // realloc ���¿���

    int newNum;
    printf("ԭ�л������������%d:\n");
    scanf("%d",&newNum);

    int* newAar = realloc(aar,sizeof (int) * (num+newNum));

    for (int i = 0; i < newNum; ++i) {
        int temp;
        printf("�����ĵ�%d�����ǣ�\n",i);
        scanf("%d",temp);

        printf("�����ĵ�%d������%d,��ַ�ǣ�%p\n",*(aar+num+i),aar+num+i);




    }


}