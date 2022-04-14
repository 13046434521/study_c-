## C
#### C和C++万物皆地址：
    函数，对象，基本类型，结构体都是地址
    %p地址占位符
    // 内存地址 == 指针
    // 指针 == 内存地址
    // int * ：int 类型的指针
    // double * :double 类型的指针
    // & :取地址符
    // * :取值符
    // 指针别名，指针变量：指针类型的变量，addr_int，addr_double
## 函数指针与指针运算
###  1. 多级指针
    指针存放的是内存地址
    指针自己也有内存地址
```c
// 多级指针
int main(){
    int num = 999;
    int *p = &num;
    int ** p_p = &p;
    printf("p value %p\np_p value %p\n",p,p_p);
    // 多级指针才可以连续多次取值。
    // 如果是一级指针，即便他存放的是个指针，也不能连续取值：**p_p
    printf("p value %d\np_p value %d\n",*p,**p_p);
}
```
### 2.数组与数组指针
    数组的地址就是数组的第一个元素的地址
    数组的正确写法：int aar[];
    数组的错误写法：int[] aar;

    数组的长度 = sizeof(aar)/sizeof(aar[0]);
    sizeof(aar) = 数组占多少个字节
    sizeof(aar[0]) = 一个元素多少个字节
    
### 3.指针挪动，指针遍历数组
    aar是个数组。输出第4个数组元素的值
    int *aar_p = &aar;
    aar_p = aar_p+3;
    printf("%d",*aar_p);
```c
int main(){
    int aar[]  = {1,2,3,4};
    int i =0;
    int length = sizeof(aar)/sizeof (aar[0]);

    for (i = 0; i < length; ++i) {
        printf("value %d\n",aar[i]);
        printf("adress %p\n",&aar[i]);
    }
    printf("---------------\n");
    // int型指针每次挪动4个字节
    // int四个字节
    // 数组是连续的内存
    int *p = &aar;
    for (i = 0; i < length; ++i)  {
        printf("value %d\n",*p);
        printf("adress %p\n",p);
        p+=1;// 因为是int型指针，每次内存移动4个字节
    }
}
```

### 4.循环给数组赋值
```c
// 循环给数组赋值
int main(){
    int aar[4] ;
    int i =0;
    int length = sizeof(aar)/ sizeof(aar[0]);
    int * aarP = &aar;
    for (i=0;i<length;i++){
        *aarP = 10000+i;//将地址中的数据赋值为10000+i：
        aarP+=1;// 指针后移一位

        printf("value :%d\n",aar[i]);
    }
}
```

### 5.数组指针操作的几种方式
```c
//数组指针操作的几种方式
int main(){
    int aar [] = {100,50,99,711};

    int * aarP = aar;
    for (int i = 0; i < 4; ++i) {
        printf("value %d\n",aarP[i]); // 用的很少的方式
        printf("value %d\n",*(aarP+i) );// 挪动指针后，取值
    }
}
```

### 6.指针类型的作用
    每次指针偏移时，在内存中移动几个字节
    intP = intP+1; 在内存中偏移4个字节
    doubleP = doubleP+1; 在内存中偏移8个字节
#### 针占用内存大小：4字节或者8字节
    32位系统:4字节
    64位系统:8字节
```c
// 指针类型的作用
int main(){
    int a = 100;
    int * intP = &a;
    double * doubleP = intP;
    // 指针占用内存大小：4字节或者8字节
    // 32位系统:4字节
    // 64位系统:8字节
    printf("int pointer size:%p\n", sizeof(intP));
    printf("double pointer size:%p\n",sizeof(doubleP));
    
    // 指针类型的作用
    // 每次指针偏移时，在内存中移动几个字节
    // intP = intP+1; 在内存中偏移4个字节
    // doubleP = doubleP+1; 在内存中偏移8个字节
}
```

### 7.函数指针
    函数本身就是一个指针。
    函数可以当做方法的一个参数
#### 定义函数指针
    返回值(*函数名)(参数,参数...)
```c
// 函数指针
// 函数名add 和 &add 是一样的。都是一个地址
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

```

## 静态开辟内存和动态开辟内存
### Boolean值
    C中的boolean值，非0值就是true
    0 == false;