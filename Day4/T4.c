#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
    // �ַ�����ת��
    char * num = "1";

    int data = atoi(num);
    // ת��ʧ��Ϊ0
    if(data){
        printf("ת���ɹ���%d",data);
    }

    // �ַ����ıȽ�
    char * name = "jtl";
    char * name1 = "jia";
    int res = strcmp(name,name1);
    // ����-0������ȣ���0�������
    if(!res){
        printf("�������");
    }else{
        printf("�����");
    }


}
