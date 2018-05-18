/* 
 * 素数合数排序输出
 */
#include <stdio.h>
#include <math.h>
void sort(int a[],int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}
int main()
{
    int a[20];
    int n, flag, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 2; j < a[i]; j++)
            if (a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        if(flag==0)
            printf("%d ", a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        flag = 0;
        for (j = 2; j < a[i]; j++)
            if (a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        if(flag==1)
            printf("%d ", a[i]);
    }
    return 0;
}
