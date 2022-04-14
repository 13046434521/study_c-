#include "stdio.h"

// 先声明，再实现
void change(int i);

void changeAddress(int * addr_i);

int main(){
    int i = 100;
    printf("%p\n",&i);
    change(i);

    // 此时打印值仍为100
    // change方法传递的值地址不一致。
    printf("%d\n",i);

    // 此时打印的值为修改过的值
    // 因为传递的是地址，changeAddress方法中，直接修改地址中的值
    changeAddress(&i);
    printf("%d\n",i);


}

void change(int b){
    // change方法传递的值的内存地址不一致
    printf("%p\n",&b);
    b = 200;
}

void changeAddress(int * addr_i){
    // 直接修改地址中的值
    * addr_i = 300;
}