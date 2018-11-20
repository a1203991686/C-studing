#include"stdio.h"
int main()
{
    int a;
    scanf("%d", &a);
    while(a--)
    {
        int n, i, j, R = 0, sum;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = 1;
            for (j = 1; j <= i; j+=2)
            {
                sum *= j;
            }
            R += sum;
        }
        printf("%d\n", R);
    }
    return 0;
}