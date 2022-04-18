#include "stdio.h"
int getLength(char * string);
void getLengthAar(char data[]);
void getLength2(char *string,int* length);

int main(){
    char * aar = "abcde";
    int length = getLength(aar);

    printf("指针测得长度:%d\n",length);


    char aar1[] = {'a','b','c','d','e','\0'};

    int length1 = getLength(aar1);
    printf("数组测得长度:%d\n",length1);


    getLengthAar(aar1);
    getLengthAar(aar);

    int length2 = 0;
    getLength2(aar,&length2);
    printf("getLength2传的参数的长度:%d\n",length2);
    getLength2(aar1,&length2);
    printf("getLength2传的数组参数的长度:%d\n",length2);
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

// 参数不管是指针还是数组，都会被编译器优化程指针
// 64位的编译器是8字节的，所以是8
void getLengthAar(char data[]){
    printf("getLengthAar传的参数的长度:%d\n",sizeof (data));
}
void getLength2(char *string,int* length){
    int count = 0;
    while (*string){
        string++;
        count++;
    }

    *length = count;
}