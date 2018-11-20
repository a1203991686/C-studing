#include"stdio.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N;
        scanf("%d", &N);
        int i, j, x = 0;
        for (i = 1; i <= 10; i++)
            for (j = 1; j <= 11; j++)
                if(N==(i*j+j+i))
                {
                    x++;
                }
        printf("%d\n", x);
    }
}