#include"stdio.h"
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        float M, X, Y, Z, s;
        scanf("%f %f %f %f", &M, &X, &Y, &Z);
        s = 1.0 * (M * X) * Z / (Y - X);
        printf("%.2f\n", s);
    }
    return 0;
} 