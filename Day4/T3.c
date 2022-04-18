#include "stdio.h"
int getLength(char * string);
int getLengthAar(char data[]);


int main(){
    char * aar = "abcdefgh";
    int length = getLength(aar);

    printf("指针测得长度:%d\n",length);


    char aar1[] = {'a','b','c','d','e','f','g','h','\0'};

    int length1 = getLength(aar1);
    printf("数组测得长度:%d\n",length1);


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
    printf("getLengthAar传的参数的长度:%d\n",sizeof (data));
}