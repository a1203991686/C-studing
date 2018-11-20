#include<stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    while (n--)
    {
        int m, ml = 0, mr = 0, mn = 0;
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            scanf("%d%d%d", &a, &b, &c);
            if (a > ml || (a == ml && b < mr) || (a == ml && b == mr && c > mn))
            {
                ml = a;
                mr = b;
                mn = c;
            }
        }
        printf("%d\n", mn);
    }
}
