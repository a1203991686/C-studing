#include"stdio.h"
int main()
{
    float a[12], sum = 0;
    int i;
    for (i = 0; i < 12; i++)
        scanf("%f", &a[i]);
    for (i = 0; i < 12; i++)
        sum += a[i];
    printf("%3.2f\n", sum / 12);
    return 0;
}