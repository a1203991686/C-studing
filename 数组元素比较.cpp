/*
 * @Author: littlecorgi 
 * @Date: 2018-05-01 10:55:21 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-05-01 11:39:22
 */
/*
 * ����������a��b������10��Ԫ�أ�
 * �ֱ�ͳ�Ƴ����������ӦԪ�ش��ڣ�a[i]>b[i]�������ڣ�a[i]=b[i]����С��(a[i]<b[i])
 * �Ĵ�����Ҫ��ͨ���������÷�ʽ���ֱ�ʹ������Ԫ�ء���������ָ�������Ϊ�����Ĳ���
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