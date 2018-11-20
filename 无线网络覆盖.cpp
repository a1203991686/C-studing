/*#include"stdio.h"
#include"math.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int L, D, R;
        scanf("%d %d %d", &L, &D, &R);
        float a, n;
        a = sqrt(R * R - (D / 2) * (D / 2)) * 2;
        if(a<=1/2)
            printf("impossible\n");
        else
        {
            n = L / a;
            if(n==(int)n)
                printf("%d\n", (int)n);
            else
                printf("%d\n", (int)n + 1);
        }        
        
    }
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int a, b, c, d;
        double l = 0, z = 0; //chang kuan banjing
        scanf("%d%d%d", &a, &b, &c);
        if (b / 2 >= c)
            printf("impossible\n");
        else
        {

            l = sqrt(4 * c * c - b * b);
            if (l / 2 <= 1)
                printf("impossible\n");
            else
            {
                z = a / l;
                //printf("%lf\n",z);
                if (z == (int)z)
                    printf("%d\n", (int)z);
                else
                    printf("%d\n", (int)z + 1);
            }
        }}
return 0;
}