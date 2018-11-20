/*#include"stdio.h"
#include"math.h"
int main()
{
    int a[255], b[25];
    int i, k, j, l = 0, x = 1;
    a[0] = 2;
    for (i = 3; i < 255; i++)
		{
			k = 0;
			for (j = 2; j <= sqrt(i); j++)
				if (i % j == 0)
					k++;
			if (k == 0)
            {
                a[x++] = i;
                l++;
            }
        }
    int N;
    scanf("%d", &N);
    j = 0;
    while(N--)
    {
        int X;
        scanf("%d", &X);
        for (i = 0; i < l; i++)
        {
            if(a[i]<X&&a[i+1]>X)
            {
                if(X-a[i]>=a[i+1]-X)
                {
                    b[j++] = a[i + 1];
                    i = l;
                }
                else
                {
                    b[j++] = a[i];
                    i = l;
                }
            }
            if(a[i]==X)
            {
                b[j++] = a[i];
                i = l;
            }
        }
    }
    for (i = 0; i < N; i++)
        printf("%d\n", b[i]);
    return 0;
}*/
#include"stdio.h"
int main()
{
    
}