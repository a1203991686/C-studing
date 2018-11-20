
#include <stdio.h>
int main()
{
    int t, n, m, a, b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &m);
        a = (m - 2 * n) / 2; //rabbit
        b = n - a;
        if(a < 0 || b < 0 || m & 1)
            printf("No answer\n");
        else
            printf("%d %d\n", b, a);
    }
    return 0;
}