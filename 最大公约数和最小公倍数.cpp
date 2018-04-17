/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:53:54 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:53:54 
 */
/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int i, j;
        int p, q;
        scanf("%d%d", &i, &j);
        int min = (i < j) ? i : j;
        int max = (i < j) ? j : i;
        for (int x = 1; x <= min; x++)
            if(i%x==0&&j%x==0)
                p = x;
        for (int y = i*j; y >= max; y--)
            if((y%i==0)&&(y%j==0))
                q = y;
        printf("%d %d\n", p, q);
    }
}*/
/*#include"stdio.h" 
int main()
{
	int M;
    scanf("%d", &M);
    while(M--)
    {
        int m, n, r, x, a, b;
        scanf("%d%d", &m, &n);
        a = m;
        b = n;
        r = m % n;
        while (r > 0)
        {
            m = n;
            n = r;
            r = m % n;	
	    }
    x = a * b / n;
    printf("%d %d\n", n, x);
    }
}*/
#include"stdio.h"
int yue(int a,int b)
{
    int i, p;
    if(a<b)
    {
        int t;
        t = a;
        a = b;
        b = t;
    }
    for (i = 1; i <= b; i++)
    {
        if(a%i==0&&b%i==0)
        {
            p = i;
        }
    }
    return p;
}
int bei(int a,int b,int p)
{
    int q = a * b / p;
    return q;
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int p,q;
    p = yue(a, b);
    q = bei(a, b, p);
    printf("%d,%d\n", p, q);
}