#include "string.h"
#include "stdio.h"

// ���ң�������ƴ��
int main(){

    char * name = "Jia Tian Long";
    char * data = "T";

    // ����
    char * res1 =strstr(name,data);
    printf("%s",res1);
    // ����
    if(res1){
        printf("����\n");
    }
    // λ�ã�ָ�����ֱ�ӽ���+/-(������ָ��ָ��ĵ�ַ��+/-)
    // ���� &res1 - &name����������Ż�ȡres1���ָ��ĵ�ַ��������res1ָ����ڴ��ַ
    //
    int index = res1 - name;
    printf("λ�ã�%d,��ַ1��%p,��ַ2��%p\n",index,res1,name);

    // ƴ��
    char destination[15];//����
    char* blank ="--��--";
    char *CPP = "C++";
    char *JAVA="JAVA";
    strcpy(destination,CPP);// ����
    strcat(destination,blank);// ƴ��
    strcat(destination,JAVA);
    printf("ƴ�ӽ��:%s\n",destination);
}
