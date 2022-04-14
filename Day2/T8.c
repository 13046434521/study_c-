#include "stdio.h"

// 函数指针
void add(int a, int b) {
    printf("a + b = %d\n", a + b);
}

void mins(int a, int b) {
    printf("a - b = %d\n", a - b);
}

// void (*method)(int,int)
// method : 方法的临时名
// void : method的返回类型
// (int,int) : method的参数类型
int opreate(void (*method)(int,int),int num1,int num2){
    printf("opreate method address is %p\n",method);
   method(num1,num2);
   return-1;
}
// 7. 函数指针 类似于Java接口的回调
// 函数本身就是指针
int main() {
    opreate(add,1,2);
    opreate(mins,100,1);

    printf("method add address is %p\n", add);
    printf("method minus address is %p\n", mins);
}
