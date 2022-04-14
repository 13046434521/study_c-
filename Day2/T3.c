#include "stdio.h"
//数组与数组指针

int main() {
    // java :int[] aar;可以
    // C/C++: int[] aar;是错的不可以
    //  C/C++: int aar[]; 是正确的
    int aar[] = {1, 2, 3, 4};
    int i = 0;
    // sizeof(aar) 求的是数组占多少字节
    // 数组长度 = 数组总字节长度/单个元素的字节长度
    int length = sizeof (aar)/ sizeof(aar[0]);
    for (i = 0; i < length; ++i) {
        printf("%d\n", aar[i]);
    }

/*    这种不推荐。可能在Linux上报错。不能在for循环里定义int j=0;
 * for (int j = 0; j < sizeof(aar); ++j) {
 *         printf("%d",aar[j]);
 *     }
*/

    // 得出结论
    // 数组的地址就是数组的第一个元素的地址
    printf("aar address:%p\n",aar);
    printf("aar array address:%p\n",&aar);
    printf("aar[0] array address:%p\n",&aar[0]);

    // 指针可以挪动
    int *aar_p = &aar;
    aar_p = aar_p+3;
    printf("%d",*aar_p);
}