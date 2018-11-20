#include"stdio.h"
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int M, a[20], i = 0, x = 0;
        scanf("%d", &M);
        while(M!=0)
        {
            a[i++] = M % 2;
            M /= 2;
        }
        for (int j = 0; j < i; j++)
            if(a[j]==1)
                x++;
        printf("%d\n", x);
    }
    return 0;
}