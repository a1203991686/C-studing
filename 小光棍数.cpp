#include"stdio.h"
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        long long int m;
        scanf("%lld", &m);
        if(m-1!=0)
            printf("%lld", m - 1);
        printf("471\n");
    }
    return 0;
}