#include "stdio.h"
int main()
{
    int a[10];
    int x;
    int i, j;
    int P;
    printf("���������ʽ����ϵ��:\n");
    for (i = 0; i < 10;i++)
        scanf("%d", &a[i]);
    printf("������x��ֵ:\n");
    scanf("%d", &x);
    P = a[0] * x + a[1];
    for (i = 2; i < 10;i++)
    {
        j = P;
        P = j * x + a[i];
    }
    printf("%d", P);
    return 0;
}