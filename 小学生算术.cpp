#include"stdio.h"
int main()
{
    int m, n;
    while(scanf("%d %d", &m, &n)&&m&&n)
    {
        int a[3], b[3], i = 0, j = 0;
        a[0] = m / 100;
        a[1] = (m - a[0] * 100) / 10;
        a[2] = m - a[0] * 100 - a[1] * 10;
        b[0] = n / 100;
        b[1] = (n - b[0] * 100) / 10;
        b[2] = n - b[0] * 100 - b[1] * 10;
        if(a[2]+b[2]>=10 )  
        {
            j = 1;
            i++;
        }  
        if(a[1]+b[1]+j>=10 )  
        {
            j = 1;
            i++;
        }  
        if(a[0]+b[0]+j>=10)  
        {
            i++;
        }
        printf("%d\n", i);
    }
    return 0;
}