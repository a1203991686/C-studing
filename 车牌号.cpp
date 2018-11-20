#include"stdio.h"
#include"string.h"
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m, i;
        scanf("%d", &m);
        fflush(stdin);
        char a[m][6], min[6];
        for (i = 0;i<m; i++)
            scanf("%s", a[i]);
        strcpy(min, a[0]);
        for (i = 1; i < m; i++)
            if(strcmp(min,a[i])>0)
                strcpy(min, a[i]);
        puts(min);
    }
    return 0;
}