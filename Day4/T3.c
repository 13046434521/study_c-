#include "stdio.h"
int getLength(char * string);
void getLengthAar(char data[]);
void getLength2(char *string,int* length);

int main(){
    char * aar = "abcde";
    int length = getLength(aar);

    printf("ָ���ó���:%d\n",length);


    char aar1[] = {'a','b','c','d','e','\0'};

    int length1 = getLength(aar1);
    printf("�����ó���:%d\n",length1);


    getLengthAar(aar1);
    getLengthAar(aar);

    int length2 = 0;
    getLength2(aar,&length2);
    printf("getLength2���Ĳ����ĳ���:%d\n",length2);
    getLength2(aar1,&length2);
    printf("getLength2������������ĳ���:%d\n",length2);
}

int getLength(char * data){
    int count = 0;
    //  while (*data) : *data!='\0'
    while (*data){
        count++;
        data++;
    }
    return count;
}

// ����������ָ�뻹�����飬���ᱻ�������Ż���ָ��
// 64λ�ı�������8�ֽڵģ�������8
void getLengthAar(char data[]){
    printf("getLengthAar���Ĳ����ĳ���:%d\n",sizeof (data));
}
void getLength2(char *string,int* length){
    int count = 0;
    while (*string){
        string++;
        count++;
    }

    *length = count;
}