#include"stdio.h"
int main()
{
    int n;
    scanf("%d", &n);
    int x = 0;
    while(n)
    {
        fflush(stdin);
        char a[n][255];
        int i;
        for (i = 0; i < n; i++)
            scanf("%s", a[i]);
        printf("SET %d\n", ++x);
        if(n%2!=0)
        {
            for (i = 0; i < n; i+=2)
                printf("%s\n", a[i]);
            for (i = n - 2; i > 0; i -= 2)
                printf("%s\n", a[i]);
        }
        else
        {
            for (i = 0; i < n; i+=2)
                printf("%s\n", a[i]);
            for (i = n - 1; i > 0; i -= 2)
                printf("%s\n", a[i]);
        }
        scanf("%d", &n);
    }
    return 0;
}