/*
 * @Author: littlecorgi 
 * @Date: 2018-03-24 15:17:35 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-03-24 15:20:55
 */
/*
 *	输入一个正整数n，生成n×n的幻方矩阵。如n=5时，矩阵为
 *	1	2	3	4	5
 *	16	17	18	19	6
 *	15	24	25	20	7
 *	14	23	22	21	8
 *	13	12	11	10	9
 */
#include<stdio.h>
int main()
{
	int a[100][100], i, j, k, m, n;//定义数组及变量
	k = 0; //输入方阵的阶数
	printf("请输入阶数n:\n");
	scanf("%d", &n);
	if(n%2==0)
		m = n / 2;
	else
		m = n / 2 + 1;
	for (i = 0; i < m; i++)
	{
		for (j = i; j < n - i; j++) //对第i行从左到右赋值
		{
			k++;
			a[i][j] = k;
		}
		for (j = i + 1; j < n - i; j++) //对n-i列从上到下赋值
		{
			k++;
			a[j][n - i - 1] = k;
		}
		for (j = n - i - 2; j >= i; j--) //对第n-i行从右到左赋值
		{
			k++;
			a[n - i - 1][j] = k;
		}
		for (j = n - i - 2; j >= i + 1; j--) //对第i列从下到上赋值
		{
			k++;
			a[j][i] = k;
		}
	}//输出数组
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%-4d ", a[i][j]);
		printf("\n");
	}
	return 0;
}