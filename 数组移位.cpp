/*
 * @Author: littlecorgi 
 * @Date: 2018-04-04 15:38:30 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-04 15:38:54
 */
/*
 * 将数组a中的连续5个元素后移m位（仍未移出数组），
 * 移出的m个元素按原来顺序存放在数组的前m位。
 */
#include"stdio.h"
int main()
{
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int m;
    printf("please input m:\n");
    scanf("%d", &m);
    int b[250];
    int c[15];
    /*int i;
    for (i = 0; i < 15;i++)
        c[i] = a[i];
    int x;
    x = 15 - m;
    for (i = 0; i < m;i++ , x++)
        b[i] = a[x];
    int y;
    y = m;
    for (i = 0; i < 15 - m; i++,y++)
        a[y] = c[i];
    for (i = 0; i < m;i++)
        a[i] = b[i];
    for (i = 0; i < 15;i++)
        printf("%d ", a[i]);*/
    int i;
    int *p, *q, *r;
    p = &a[0];
    q = &b[0];
    r = &c[0];
    for (i = 0; i < 15;i++)
        *(r + i) = *(p + i);
    int x;
    x = 15 - m;
    for (i = 0; i < m;i++ , x++)
        *(q + i) = *(p + x);
    int y;
    y = m;
    for (i = 0; i < 15 - m; i++,y++)
        *(p + y) = *(r + i);
    for (i = 0; i < m;i++)
        *(p + i) = *(q + i);
    for (i = 0; i < 15;i++)
        printf("%d ", *(p + i));
    return 0;
}