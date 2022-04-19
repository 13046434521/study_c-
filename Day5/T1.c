#include "stdio.h"
#include "stdlib.h"
void fun(char* dest,char *src,int start,int end);
int getLength(char* data);
int main(){
    char* name = "JiaTianLong";
    int length = getLength (name);
    char* data = malloc(length);
    fun(data,name,3,7);


    printf("%s",data);
    if(data){
        free(data);
        data = NULL;
    }
}

int getLength(char* data){
    int length = 0;
    while (*data){
        length++;
        data++;
    }

    return length;
}

void fun(char* dest,char *src,int start,int end){
    if(end<=start){
        return;
    }
    int size = end-start;

    dest = realloc(dest,size+1);

    if(*dest){
        char* temp = dest;
        for (int i = 0; i < size; ++i) {
            *temp = *(src+start+i);
            temp++;
        }
        *temp ='\0';
    }
}