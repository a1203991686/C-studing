#include"stdio.h"
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int n, sum = 0, i, j = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = sum + (i + j);
            j += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}