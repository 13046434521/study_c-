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
### 静态开辟
    在栈中开辟内存。
    大小有限，大约2M左右。太大会崩溃
    随着方法出栈而销毁
### 动态开辟
    malloc：在堆中开辟内存
    需要导入#include<stdlib.h>库
    void* 可以转换成任意其他类型指针
    通过free来释放。
    悬空指针：通过free对内存进行释放，但是释放的指针仍旧指向内存地址。
    野指针：空的，没有指向地址的指针。int * p;
    这两种写法等价：aar[ i ] = * (aar + i);
    realloc 重新开辟空间，返回初始地址

## 字符串
### 字符串打印：
    printf打印字符串时需要以'\0'为结尾。
    数组：char data[] ={'j','t','l'}; //这个没有以'\0'为结尾，直接打印会乱码
    指针：char *data ="jtl"; 默认以'\0'为结尾
### 字符串的修改：
    字符串保存在全局区。不能修改。
    数组：相当于将字符串从全局区拷贝到栈中，所以可以修改
    指针：指向全局区的字符串。不能修改，否则崩溃
```c
#include "stdio.h"

// printf 输出字符串需要以'\0'结尾
// 只有字符串以'\0'结尾
int main(){
    // 正常情况
    printf("\n------正常情况------\n");
    //将字符串从全局区/静态区拷贝到栈空间。在栈空间操作
    char aar[] = {'J','i','a','T','i','a','n','L','o','n','g'};
    printf("第一种方式：%s\n",aar);
    printf("\n------------\n");

    // 这种方式，默认在最后加上\0 所以不会出问题
    // 将指针指向，全局区/静态区的地址。
    // 无法修改全局区的数据，会崩溃
    char * aar1 = "JiaTianLong";
    printf("第二种方式：%s\n",aar1);
    printf("\n------替换元素------\n");
    // 替换元素
//    aar1[3] = 'J';// 写这个会崩溃，无法修改全局区的数据
//    printf(aar1);

    int test[] = {1,2,3};
    printf("%d",*(test+2));
}
```
### 数组的传递：
    方法参数不管是指针还是数组，都会被编译器优化成指针。取大小时都是指针的大小。
```c
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
// 64位的编译器是8字节的，所以data长度是8
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
```
    

### 字符串的比较：string.h文件
    strcmp  ：区分大小写比较
    strcmpi ：不区分大小写比较
    返回-0，相同
### 字符串的拷贝和拼接
    strcpy  ：拷贝
    strcat  : 拼接
 
### 字符串大小写转换
```c
#include "stdio.h"
#include "ctype.h"

void lower(char* dest,char* src);

int main(){
    char res [25];
    char *name ="Jia Tian Long";
    lower(res,name);

    printf("result : %s",res);
}
// 不管是指针还是数组，都被优化成指针
void lower(char* dest,char* src){
    char * temp = src;
    while (*temp){
        *dest = tolower(*temp);//传的是地址
        dest++;
        temp++;
    }
    *dest = '\0';//需加上'\0'
}
```

## 结构体
#### 结构体写法
    1. 必须以分号结尾
    2. 结构体中的字符串数组，必须拷贝strcpy赋值。指针则不用
    3. 结构体可以直接在末尾定义变量
    4. 结构体指针用->来调用参数，结构体用 . 来调用
    5. typedef 用来定义别名。可以避免VS和CLion中不同写法带来的代码差异
    6. 枚举多数以int值形式定义，之后每一个加1
    7. 在定义枚举时，可以直接使用别名。typedef + 关键字 +别名 +;
```c
struct Dog{
    //成员
    char name[10];
    int age;
    char sex;
};//必须有分号结尾。

struct Person{
    char*name;
    char sex;
    int age;
} JTL = {"jtl",'M',29},
MG={"cx",'W',30},
DEFAULT;//没有赋值，都是默认值
typedef struct Dog Doa;
typedef Doa* dog_p;


// typedef  定义别名
// VS中结构体：Dog dog; //不需加关键字struct
// Clion中：struct Dog dog;// 需加关键字struct
// 结构体用'.'
// 结构体指针用'->'
int main(){
    // 结构体
    struct Cat cat = {"Cola",1};
    cat.age = 2;
    printf("name:%s,age:%d\n",cat.name,cat.age);

    // 结构体指针
    struct Cat* cat1 = &Ice;
    cat1->age = 3;
    printf("name:%s,age:%d\n",cat1->name,cat1->age);
}

enum LAUGUAGE{
    CPP=1,
    JAVA,
    KT,
    PYTHON
};

typedef enum LAUGUAGE LAUGUAGE;
// 直接定义 枚举
typedef enum {
    CHINA =1,
    RUSS,
    FRANCE,
}Country;
```