/*
 * @Author: littlecorgi 
 * @Date: 2018-03-24 09:22:02 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-03-24 09:28:56
 */
/*
 * 有一个n×m的整数矩阵，请对矩阵中的元素重新排列，
 * 使得同行元素中右边元素大于左边的元素，
 * 同列元素中下边的元素大于上边的元素
 */
#include"stdio.h"
int main()
{
    const int n = 3, m = 4;
    int a[n][m] = {{4, 7, 6, 2}, {1, 5, 3, 8}, {9, 10, 45, 85}};
    int b[n * m];
    int i, j, x, temp;
    x = 0;
    for (i = 0; i < n;i++)
        for (j = 0; j < m;j++)
                b[x++] = a[i][j];/*先把二维数组转换为一维数组*/
    for (i = 0; i < n * m ;i++)
        for (j = i + 1; j < n * m - 1;j++)
        if(b[i]>b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }/*对一维数组进行排序*/
    x = 0;
    for (i = 0; i < n;i++)
        for (j = 0; j < m;j++)
                a[i][j] = b[x++];/*再把按升序排列的一维数组转换为二维数组*/
    for (i = 0; i < n;i++)
        {
            for (j = 0; j < m;j++)
                printf("%4d", a[i][j]);
            printf("\n");
        }/*输出*/
    return 0;
}