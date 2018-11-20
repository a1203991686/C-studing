#include"stdio.h"
#include"stdlib.h"
int main()
{
    int n, b;
    while(scanf("%d %d",&n,&b)!=EOF)
    {
        printf("% d\n", n / b);
    } 
    return 0;
}