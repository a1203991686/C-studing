/*
 * @Author: littlecorgi 
 * @Date: 2018-04-04 14:36:35 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-04 14:48:57
 */
/*
 * 数组a中存放10个非0整数，
 * 编写程序，将数组a中的所有正数存放在数组的前面，
 * 负数存放在数组的后面。
 */
#include"stdio.h"
int main()
{
	const int M = 10;
	int a[M];
	int b[M];
	printf("please input a:\n");
	int i;
	for (i = 0; i < M; i++)
		scanf("%d", &a[i]);
	int j;
	int x = 0;
	i = 0; j = 0;
	/*while(i+j<M)
	{
		if (a[x] > 0)
		{
			b[i] = a[x];
			i++;
		}
		if (a[x] < 0)
		{
			b[M - j - 1] = a[x];
			j++;
		}
		x++;
	}*/
	int *p, *q;
	p = &a[0];
	q = &b[0];
	while(i+j<M)
	{
		if (a[x] > 0)
		{
			*(q + i) = *(p + x);
			i++;
		}
		if (a[x] < 0)
		{
			*(q + M - j - 1) = *(p + x);
			j++;
		}
		x++;
	}
	/*for (i = 0; i < M; i++)
		printf("%d ", b[i];*/
	for (i = 0; i < M; i++)
		printf("%d ", *(q + i));
	return 0;
}