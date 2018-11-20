#include"stdio.h"
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int M, i, j;
        scanf("%d", &M);
        for (i = 0; i < M; i++)
        {
            for (j = i + 1; j <= 9; j++)
            {
                printf("%d*%d=%d ", i + 1, j, (i + 1) * j);
            }
            printf("\n");
        }
    }
    return 0;
}