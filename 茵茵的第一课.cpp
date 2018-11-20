#include<stdio.h>
int main()
{
    int n;
    char a[20];
    scanf("%d", &n);
    n++;
    while (n--)
    {
        gets(a);
        puts(a);
    }
    return 0;
}