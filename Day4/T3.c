#include "stdio.h"
int getLength(char * string);
int getLengthAar(char data[]);


int main(){
    char * aar = "abcdefgh";
    int length = getLength(aar);

    printf("ָ���ó���:%d\n",length);


    char aar1[] = {'a','b','c','d','e','f','g','h','\0'};

    int length1 = getLength(aar1);
    printf("�����ó���:%d\n",length1);


    getLengthAar(aar1);
    getLengthAar(aar);
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
int getLengthAar(char data[]){
    printf("getLengthAar���Ĳ����ĳ���:%d\n",sizeof (data));
}