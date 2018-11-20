#include"stdio.h"
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        double a,b,c;
        scanf("%lf %lf %lf", &a, &b, &c);
        if(a+b-c<0.00001&&a+b-c>-0.00001)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}