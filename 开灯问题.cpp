#include"stdio.h"
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i, a[n], j;
    for (i = 0; i < n; i++)
        a[i] = 1;
    for (i = 2; i <= k; i++)
        for (j = 0; j < n; j++)
            if((j+1)%i==0)
            {
                if(a[j]==0)
                    a[j] = 1;
                else
                    a[j] = 0;
            }
    for (i = 0; i < n; i++)
        if(a[i]==1)
            printf("%d ", i + 1);
    return 0;
}