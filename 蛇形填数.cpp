/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:54:27 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:54:27 
 */
#include"stdio.h"
int main()
{
    int a[100][100], i, j, k, m, n;//定义数组及变量
    k = 0; //输入方阵的阶数
	scanf("%d", &n);
	if(n%2==0)
		m = n / 2;
	else
		m = n / 2 + 1;
	for (i = 0; i < m; i++)
	{
		for (j = i; j < n - i; j++) //先对第n-i-1列从上至下赋值
		{
			k++;
			a[j][n - i - 1] = k;
		}
		for (j = n - i - 2; j > i; j--) //对第n-i-1行从右到左赋值
		{
			k++;
			a[n - i - 1][j] = k;
		}
		for (j = n - i - 1; j > i - 1; j--) //对第i列从下至上赋值
		{
			k++;
			a[j][i] = k;
		}
		for (j = i + 1; j < n - i - 1; j++) //对第i行从左至右赋值
		{
			k++;
			a[i][j] = k;
		}
	}//输出数组
	if(n%2!=0)
		a[n - m][n - m] = n * n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%-4d ", a[i][j]);
		printf("\n");
	}
	return 0;
}