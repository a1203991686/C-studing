/*
 * @Author: littlecorgi 
 * @Date: 2018-04-13 18:07:34 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-13 18:10:02
 */
/*
 * ��д����ͳ���ַ���str�к����Ӵ�substr�ĸ�����
 * Ҫ��
 * (1)�ַ����Ӽ������룻
 * (2)�ֱ����±귨��ָ�뷨ʵ��
 */
#include "stdio.h"
#include"string.h"
int main()
{
    const int M = 255;
    char a[M], b[M];
    scanf("%s", a);
    scanf("%s", b);
    /*int x = strlen(a), y = strlen(b), z = 0;
    int i, j, sum;
    for (i = 0; i < x - y; i++)
    {
        sum = 0;
        for (j = 0; j < y; j++)
            if(a[i+j]==b[j])
                sum++;
        if(sum==y)
            z++;
    }
    printf("%d\n", z);*/
    char *p = a, *q = b;
    int x = strlen(a), y = strlen(b), z = 0;
    int i, j, sum;
    for (i = 0; i < x - y; i++)
    {
        sum = 0;
        for (j = 0; j < y; j++)
            if(*(p+i+j)==*(q+j))
                sum++;
        if(sum==y)
            z++;
    }
    printf("%d\n", z);
    return 0;
}
