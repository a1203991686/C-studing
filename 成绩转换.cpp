#include"stdio.h"
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int M;
        scanf("%d", &M);
        if(M<=100&&M>=90)
            printf("A\n");
        if(M<=89&&M>=80)
            printf("B\n");
        if(M<=79&&M>=70)
            printf("C\n\n");
        if(M<=69&&M>=60)
            printf("D\n");
        if(M<=59&&M>=0)
            printf("E\n");
    }
    return 0;
}