/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:53:47 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-12 20:54:49
 */
#include"stdio.h"
int main()
{
    int a[3];
    int i;
    for (i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    int j;
    for (i = 0; i < 2;i++)
        for (j = i + 1; j < 3;j++)
        if(a[i]>a[j])
        {
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j] = temp;
        }
    for (i = 0; i < 3; i++)
        printf("%d ", a[i]);
}