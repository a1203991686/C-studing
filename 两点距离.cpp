#include"stdio.h"
#include"math.h"
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        float x1, y1, x2, y2, s;
        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
        s = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        if(s<0)
            s = 0 - s;
        printf("%.2f\n", s);
    }
    return 0;
}