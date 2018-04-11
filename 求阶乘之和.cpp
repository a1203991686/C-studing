/*
 * @Author: little corgi--TianWeikang
 * @Date: 2018-01-13 12:01:59
 * @Last Modified by: little corgi--TianWeikang
 * @Last Modified time: 2018-01-13 12:10:10
 */

/*
 *求S=1！+3！+5！+7！+……+n！（n是奇数）
 *n=9
 *s=368047.000000
 */

#include "stdio.h"
int main()
{
    int i, j;
    int n;
    int sum;
    int x;
    sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
    {
        x = 1;
        for (j = 1; j <= i; j++)
        {
            x *= j;
        }
        sum += x;
    }
    printf("%d", sum);
}
