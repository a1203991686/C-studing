#include"stdio.h"
#define n 10
int main()
{
    int a[n];
    int i, j, t;
    printf("please input 10 numbers:\n");
    for (i = 0; i < n;i++)
        scanf("%d", &a[i]);
    printf("\n");
    for (i = 0; i < n - 1;i++)
        for (j = i + 1; j < n;j++)
            if(a[i]<a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    printf("the sorted numbers:\n");
    for (i = 0; i < n;i++)
        printf("%d", a[i]);
    return 0;
}