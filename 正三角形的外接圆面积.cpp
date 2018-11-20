#include"stdio.h"
#include"math.h"
#define PI 3.1415926
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        double m, s;
        scanf("%lf", &m);
        s = PI * (sqrt(3) / 3 * m) * (sqrt(3) / 3 * m);
        printf("%.2lf\n", s);
    }
    return 0;
}