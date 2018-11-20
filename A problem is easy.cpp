#include"stdio.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        long long N;
        scanf("%lld", &N);
        long long i, j, x = 0;
        for (i = 1; i * i <= N - 1; i++)
            if((N-i)%(i+1)==0)
                x++;
        printf("%lld\n", x);
    }
    return 0;
}