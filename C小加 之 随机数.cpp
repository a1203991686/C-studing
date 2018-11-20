#include <stdio.h>
#include <string.h>
int main()//桶排序
{
    int a[1001], n, i, p, t, c;
    scanf("%d", &t);
    while (t--)
    {
        c = 0;
        memset(a, 0, sizeof(a));
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &p);
            if (a[p] == 1)
                c++;
            a[p] = 1;
        }
        printf("%d\n", n - c);
        for (i = 0; i < 1001; i++)
            if (a[i] == 1)
                printf("%d ", i);
        printf("\n");
}
return 0;
}