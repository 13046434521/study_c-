//2. �ṹ�嶨����ʹ�� ��һ�ַ���
// C���� �ṹ���൱��Java�е���
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "malloc.h"

struct Dog{
    //��Ա
    char name[10];
    int age;
    char sex;
};//�����зֺŽ�β��

int main(){
    struct Dog dog;//û�г�ʼ��������£�Ĭ����ϵͳֵ
    printf("name:%s,age:%d,sex:%c\n",dog.name,dog.age,dog.sex);
// �ṹ����ַ������鸳ֵ����ʹ�ÿ���
//    dog.name="����"; // ���鲻��ֱ�Ӹ�ֵ��ָ�����
    strcpy(dog.name,"����");
    dog.age=1;
    dog.sex='M';
    printf("name:%s,age:%d,sex:%c\n",dog.name,dog.age,dog.sex);

    return 0;
}
