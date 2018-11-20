#include"stdio.h"
#define PI 3.1415926
int main()
{
    double r;
    while(scanf("%lf", &r)!=EOF)
    {
        double V;
        V = PI * r * r * r * 4 / 3;
        printf("%d\n", (int)(V+0.5));
    }
    return 0;
}
//必须用double定义半径和体积