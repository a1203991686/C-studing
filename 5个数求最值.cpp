/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:53:31 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-12 20:54:52
 */
#include"stdio.h"
int main()
{
    int a[5];
    int i, j;
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);
    for (i = 0;i<4;i++)
        for (j = i + 1; j < 5;j++)
        if(a[i]>a[j])
        {
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j] = temp;
        }
    printf("%d %d", a[0], a[4]);
}