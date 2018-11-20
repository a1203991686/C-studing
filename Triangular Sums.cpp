#include<stdio.h>
int main()
{
    int a[305], b[305], t, c = 1;
    scanf("%d", &t);
    a[0] = 1;
    for (int i = 1; i <= 305; i++)
        a[i] = i * (i + 1) / 2;
    b[1] = a[2];
    for (int i = 2; i <= 300; i++)
        b[i] = b[i - 1] + a[i + 1] * i;
    while(t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d %d %d\n", c++, n, b[n]);
    }
    return 0;
}  