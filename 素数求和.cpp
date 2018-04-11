/*
 * @Author: littlecorgi 
 * @Date: 2018-04-10 20:24:06 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-10 20:28:52
 */
/*
 * 描述
 * 现在给你N个数（0<N<1000），现在要求你写出一个程序，找出这N个数中的所有素数，并求和。
 * 输入
 * 第一行给出整数M(0<M<10)代表多少组测试数据
 * 每组测试数据第一行给你N，代表该组测试数据的数量。
 * 接下来的N个数为要测试的数据，每个数小于1000
 * 输出
 * 每组测试数据结果占一行，输出给出的测试数据的所有素数和
 * 样例输入
 * 3
 * 5
 * 1 2 3 4 5
 * 8
 * 11 12 13 14 15 16 17 18
 * 10
 * 21 22 23 24 25 26 27 28 29 30
 * 样例输出
 * 10
 * 41
 * 52
 */
#include"stdio.h"
#include"math.h"
int main() 
{
	int M;
	scanf("%d", &M);
	int b[3];
	int x = 0;
	int i;
	while (M--)
	{
		int N;
		scanf("%d", &N);
		int a[255];
		for (i = 0; i < N; i++)
			scanf("%d", &a[i]);
		int sum=0;
		int k;
		for (i = 0; i < N; i++)
		{
			if (a[i] != 1)
			{
				k = 0;
				for (int j = 2; j <= sqrt(a[i]); j++)
				{
					if (a[i] % j == 0)
						k++;
				}
				if (k == 0)
					sum += a[i];
			}
		}
		b[x] = sum;
		x++;
	}
	for (i = 0; i < 3;i++)
			printf("%d\n", b[i]);
}