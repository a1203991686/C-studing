#include<stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != 0)
    {
        int a, b, c, t = 0;
        for (int i = 1; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            c = a + b;
            if (c > t)
                t = c;
        }
        printf("%d\n", c);
    }
    return 0;
}