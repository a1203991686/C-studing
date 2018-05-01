/*
 * @Author: littlecorgi 
 * @Date: 2018-05-01 10:55:21 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-05-01 11:39:22
 */
/*
 * 有两个数组a、b，各有10个元素，
 * 分别统计出两个数组对应元素大于（a[i]>b[i]）、等于（a[i]=b[i]）和小于(a[i]<b[i])
 * 的次数。要求：通过函数调用方式，分别使用数组元素、数组名和指针变量作为函数的参数
 */
#include"stdio.h"
#include"string.h"
int max = 0, same = 0, min = 0;
void compare_1(char a,char b)
{
    if(a>b)
        max++;
    if(a==b)
        same++;
    if(a<b)
        min++;
}

void compare_2(char a[11],char b[11])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if(a>b)
            max++;
        if(a==b)
            same++;
        if(a<b)
            min++;
    }
    printf("%d %d %d", max, same, min);
}

void compare_3(char *p, char *q)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if(*(p+i)>*(q+i))
            max++;
        if(*(p+i)==*(q+i))
            same++;
        if(*(p+i)<*(q+i))
            min++;
    }
    printf("%d %d %d", max, same, min);
}

int main()
{
    char a[11],b[11];
    scanf("%s", a);
    getchar();
    scanf("%s", b);
    getchar();
    // int i;
    // for (i = 0; i < 10; i++)
    // {
    //     compare_1(a[i], b[i]);
    // }
    // printf("%d %d %d\n", max, same, min);

    // compare_2(a, b);

    char *p = a, *q = b;
    compare_3(p, q);
    
    return 0;
}