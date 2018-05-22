#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int SIZEchar(char a[])
{
	int i = 0;
	while (a[i] != '\0')
		i++;
	return i;
}/*定义size函数求长度*/
int main()
{
	const int M = 30;
	char a1[M];
	char a2[M];
	printf("please input a1\n");
	//scanf_s("%s", a1);
	gets(a1);
	printf("please input a2\n");
	//scanf_s("%s", a2); /*从键盘键入a1,a2*/
	gets(a2);
	int b1, b2;
	b1 =  SIZEchar(a1);
	b2 =  SIZEchar(a2);/*计算a1、a2数的长度*/
	int c1[M], c2[M], c3[M];
	int i;
	for (i = 0; i < b1; i++)
	{
		c1[i] = a1[i] - '0';
	}/*将d1转为一维数组*/
	printf("\n");
	for (i = 0; i < b2; i++)
	{
		c2[i] = a2[i] - '0';
	}/*将d2转为一维数组*/
	printf("\n");
	for (i = 0; i < b1; i++)
		printf("%d", c1[i]);
	printf("-");
	for (i = 0; i < b2; i++)
		printf("%d", c2[i]);
	printf("=");
	for (i = 0; i < b1; i++)
	{
		if (c2[i] != 0)
			c2[i + b2] = c2[i];
		else
			c2[i] = 0;
	}
	for (i = b1-1; i >= 0; i--)/*计算*/
	{
		if (i < b1-b2)
			c2[i] = 0;
		if (c1[i] >= c2[i])
			c3[i] = c1[i] - c2[i];
		else
		{
			c3[i] = c1[i] + 10 - c2[i];
			c1[i - 1] -= 1;
		}
	}
	int x = 0;/*x为c3的计数器*/
	for (i = 0; i < b1; i++,x++)
	{
		if (c3[i] != 0)
			i = b1;
	}
	x = x - 1;
	for (i = 0; i < b1-x; i++)
	{
		c3[i] = c3[i + x];
	}
	for (i = 0; i < b1-x; i++)
		printf("%d", c3[i]);
	return 0;
}