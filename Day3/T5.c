#include "stdio.h"
#include "stdlib.h"

// ��̬����
// �ı�����
int main(){
    printf("���������鳤�ȣ� \n");
    int num  ;
    scanf("%d", &num);

    printf("�����������:%d\n",num);

    int* aar = malloc(sizeof (int)*num);
    for (int i = 0; i < num; ++i) {
        int temp;
        printf("�������%d��ֵ��",i);
        scanf("%d",&temp);
        // aar[ i ] = * (aar + i);
        *(aar+i) = temp;// ָ�����ݸ�ֵ

        printf("�����ֵ��%d,��ַ�ǣ�%p\n",*(aar+i),aar+i);
    }

    // �ͷ��ڴ�
    // ��������ָ��
    free(aar);
    aar = NULL;
}
