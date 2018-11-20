#include"stdio.h"
int main()
{
    int T;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        char a,b;
        scanf("%c", &a);
        getchar();
        scanf("%c", &b);
        getchar();
        if(a>b)
            printf("%c<%c\n", a, b);
        if(a==b)
            printf("%c=%c\n", a, b);
        if(a<b)
            printf("%c>%c\n", a, b);
    }
    return 0;
}