/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:54:36 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:54:36 
 */
#include"stdio.h"
int main()
{
    int s;
    scanf("%d", &s);
    while(s--)
    {
        int m, n;
        scanf("%d %d", &n, &m);
        int i, x = 0, y; //x为m出现次数
        for (i = 1; i <= n;i++)
        {
            y = i;
            while(y%m==0)
            {
                x++;
                y /= m;
            }
        }
        printf("%d\n", x);
    }
}