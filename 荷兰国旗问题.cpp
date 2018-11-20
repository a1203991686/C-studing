#include"stdio.h"
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        int num[3] = {0}, i;
        char a;
        scanf("%c", &a);
        while(a==82||a==87||a==66)
        {
            if(a==82)
                num[0]++;
            if(a==87)
                num[1]++;
            if(a==66)
                num[2]++;
            scanf("%c", &a);
        }
        for (i = 0; i < num[0]; i++)
            printf("R");
        for (i = 0; i < num[1]; i++)
            printf("W");
        for (i = 0; i < num[2]; i++)
            printf("B");
        printf("\n");
    }
    return 0;
}