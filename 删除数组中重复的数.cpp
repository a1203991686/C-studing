/*
 * @Author: littlecorgi 
 * @Date: 2018-03-29 21:59:22 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-03-29 22:08:33
 */
/*
 * �ٶ�һ����������a[20]����Ч����Ϊ10��
 * ������һ����x,�������a������ͬ��������ͳͳɾ��
 */
#include "stdio.h"
#include "conio.h"
#define N 20
void Sort(  int a[ ] , int n)
{
    int i, j;
    int t;
    for (i=0; i<n-1; i++)
        for  (j=i+1; j<n; j++)
            if (a[i]>a[j])  
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

void delx(int a[ ],int n,int p) 
{
    int i; /*ɾ��pλ�õ�x */
    for(i=p+1;i<n;i++)
        a[i - 1] = a[i];
}

int FindPos(int a[ ],int n,int x)/* �۰�����㷨 */
{ 
    int top=0,bottom=n-1,mid;
    if (x<a[0] || x>a[n-1]) return(-1);
    while (top<=bottom)
    {
        mid = (top + bottom) / 2;
        if (x==a[mid])
            return (mid);
        else if (x<a[mid])
            bottom = mid - 1;
        else
            top = mid + 1;
    }
    return (-1);
}

int main()
{
    int a[N], n = 10, x, p;
    int i;
    printf("����������\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    Sort(a, n);
    printf("������x\n");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
    scanf("%d", &x);
    /* Ѱ��xλ��p*/
    p = FindPos(a, n, x);
    while (p >= 0)
    {
        delx(a, n, p);
        n--;
        p = FindPos(a, n, x);
    }
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}