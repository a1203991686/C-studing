#include"stdio.h"
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int i, m, x = 1, count = 0;
        scanf("%d", &m);
        for (i = 0; i < m; i++)
        {
            count = (x + 1) * 2;
            x = count;
        }
        printf("%d\n", count);
    }
    return 0;
}