#include "stdio.h"

struct Study{
    char*content;
};

struct Student{
    char* name;
    int age;

    struct Study study;
    struct Class{
        char* grade;
        int class;
    } cClass;
};


int main(){
    // 复杂：第一种写法
    struct Student student = {"jtl",29};
    student.study.content ="chinese";
    struct Class aClass = {"9",2};
    printf("name:%s,age:%d,grade:%s,class:%d,study:%s\n",student.name,student.age,aClass.grade,aClass.class,student.study.content);

    // 复杂：第二种写法
    struct Student student1 ={"jtq",15,{"math"},{"9",4}};
    printf("name:%s,age:%d,grade:%s,class:%d,study:%s\n",student1.name,student1.age,student1.cClass.grade,student1.cClass.class,student1.study.content);
}