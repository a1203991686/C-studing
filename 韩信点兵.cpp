/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:54:41 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:54:41 
 */
#include"stdio.h"
int main()
{
    int a[255];
    int i;
    for(i=0;i<255;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==0)
            break;
        else
        {
            int x;
            x = a[i];
            int a,b,c;
            a = x / 100;
            b = (x - 100 * a) / 10;
            c = x - a * 100 - b * 10;
        if(a*a*a+b*b*b+c*c*c==x)
            printf("Yes\n");
        else
            printf("No\n");
        }

    }
}