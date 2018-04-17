#include"stdio.h"
#include"math.h"
int main()
{
    int a[255];
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
    /*for (i = 0; i < l;i++)
        printf("%d,", a[i]);*/
    int M;
    scanf("%d", &M);
    while(M--)
    {
        int n, A, B;
        scanf("%d", &n);
        for (i = 1; i < n;i++)
            if(n<a[i]&&n>a[i-1])
            {
                if((a[i]-n)>(n-a[i-1]))
                {
                    A = a[i - 1];
                    B = n - a[i - 1];
                }
                else if((a[i]-n)<(n-a[i-1]))
                {
                    A = a[i];
                    B = a[i] - n;
                }
                else
                {
                    A = a[i - 1];
                    B = n - a[i - 1];
                }
            }
        printf("%d %d\n", A, B);
    }
}