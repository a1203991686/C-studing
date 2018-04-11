#include"stdio.h"
int main()
{
	const int M = 255;
	int n;
	printf("please input n:\n");
	scanf("%d", &n);
	int a[M];
	printf("please input \n");
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
    int b[M];
    int e;
    for (i = 0; i < n - 1; i++)
	{
		if (a[i + 1] - a[i]>2)
		{
			printf("Mistake\n");
			e = 0;
			i = n;
		}
	}
	int f;
	int x = 0;
	if (e != 0)
	{
		int e = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (a[i + 1] - a[i] == 2)
			{
				e++;
			}
		}
		if (e == 1)
		{
			for (i = a[0], j = 0; i < a[0] + n; i++, j++)
			{
				if (i != a[j])
				{
					b[0] = i;
					x = x + 1;
					i += 1;
				}
			}
			if (x == 1)
			{
				printf("%d\n", b[0]);
				f = 0;
			}
		}
		if (e > 1)
			printf("Mistake\n");
	}
	if (f != 0 && e != 0)
	{
		int y = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (a[i + 1] - a[i] != 1)
			{
				y++;
				i = n;
			}
		}
		i = a[0] - 1;
		j = a[n-1] + 1;
		if (y == 0)
			printf("%d %d",i , j);
	}
    return 0;
}