#include"stdio.h"
int main()
{
    int ni;
    while(scanf("%d",&ni)!=EOF)
    {
        int a[255], i = 0, j;
        if(ni == 0)
            printf("0\n");
        else if(ni == 1)
            printf("1\n");
        else
        {
            while(ni != 1)
            { 
                a[i] = ni % 2;
                ni /= 2;
                i++;
            }
            a[i] = 1;
            for (j = i; j >= 0; j--)
                printf("%d", a[j]);
            printf("\n");    
        }
    }
    return 0;
}