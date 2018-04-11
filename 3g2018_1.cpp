#include"stdio.h"
int main()
{
    int K;/*K为整数*/
    int m, n;/*m，n为范围*/
    int i;
    int a[3];/*a[3]为子数*/
    printf("请输入K的值：\n");
    scanf("%d", &K);
    printf("请输入m的值：\n");
    scanf("%d", &m);
    printf("请输入n的值：\n");
    scanf("%d", &n);
    const int M = 255;
    int c[M];
    int x = 0;
    for (i = m; i < n + 1;i++)
    {
        a[0] = i / 10000;
        a[1] = (i - 10000 * a[0]) / 1000;
        a[2] = (i - 10000 * a[0] - 1000 * a[1]) / 100;
        a[3] = (i - 10000 * a[0] - 1000 * a[1] - 100 * a[2]) / 10;
        a[4] = i - 10000 * a[0] - 1000 * a[1] - 100 * a[2] - 10 * a[3];
        int b[3];
        b[0] = a[0] * 100 + a[1] * 10 + a[2];
        b[1] = a[1] * 100 + a[2] * 10 + a[3];
        b[2] = a[2] * 100 + a[3] * 10 + a[4];
        if(b[0]%K==0&&b[1]%K==0&&b[2]%K==0){
            c[x++] = i;
        }
    }
    int j;
    for (i = 0; i < x - 1;i++)
        for (j = i + 1; j < x;j++)
        {
            if(c[i]>c[j])
            {
                int temp;
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    for (i = 0; i < x;i++)
        printf("%d\n", c[i]);
}