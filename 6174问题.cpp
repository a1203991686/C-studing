/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:53:35 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:53:35 
 */
#include"stdio.h"
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int x;
		scanf("%d", &x);
		int cishu = 0;
		int a[4];
        int p, q, y, i, j;//p为最小值，q为最大值，y为两者之差
        a[0] = x / 1000;
		a[1] = (x - a[0] * 1000) / 100;
		a[2] = (x - a[0] * 1000 - a[1] * 100) / 10;
		a[3] = x % 10;
		for (i = 0; i < 3; i++)
			for (j = i + 1; j < 4; j++)
				if (a[i] > a[j])
				{
					int temp;
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
		p = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		q = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
		y = q - p;
		cishu++;
		while (y != x)
		{
			x = y;
			a[0] = y / 1000;
			a[1] = (y - a[0] * 1000) / 100;
			a[2] = (y - a[0] * 1000 - a[1] * 100) / 10;
			a[3] = y % 10;
			for (i = 0; i < 3; i++)
				for (j = i + 1; j < 4; j++)
					if (a[i] > a[j])
					{
						int temp;
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
			p = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
			q = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
			y = q - p;
			cishu++;
		}
		printf("%d\n", cishu);
	}
}