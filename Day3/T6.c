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
        printf("�������%d������ֵ��",i);
        scanf("%d",&temp);

        *(aar+i) = temp;
        printf("��%d�����ǣ�%d,��ַ��%p\n",i,*(aar+i),aar+i);
    }

    // realloc ���¿���

    int newNum;
    printf("ԭ�л������������:");
    scanf("%d",&newNum);

    int* newAar =(int *) realloc(aar,sizeof (int) * (num+newNum));
    // sizeof(aar) ����ע�⣬��������ָ��Ĵ�С�����������ݵĴ�С��
    // ����ΪNULL,�������ڴ�ʧ��
    if(newAar){
        for (int i = 0; i < newNum; ++i) {
            int temp;
            printf("�����ĵ�%d�����ǣ�",i);
            scanf("%d",&temp);
            *(aar+num+i) = temp;
            printf("�����ĵ�%d������%d,��ַ%p��\n",i,*(newAar+num+i),newAar+num+i);
        }

        for (int i = 0; i <num+newNum ; ++i) {
            printf("��%d������%d,��ַ�ǣ�%p\n",i,*(newAar+i),newAar+i);
        }
    }

    // �ڴ��ͷţ���������ָ��
    if(newAar){
        free(newAar);
        newAar = NULL;
    }
    else if(aar){
        free(aar);
        aar = NULL;
    }
}