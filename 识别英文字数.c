#include"stdio.h"
#include"string.h"
int count(char a[])
{
	int i = 0;
	while (a[i] != '\0')
		i++;
	return i;
}
int count1(char a[])
{
	int i = 0;
	while (a[i] <122&&a[i]>65)
		i++;
	return i;
}
int main()
{
	const int M = 233;
	const int N = 233;
	char a[M]; /*����*/
	printf("����һ��Ӣ�ĵ���:\n");
	gets(a);
	int b;
	b = count(a);
	printf("b=%d\n", b);
	int i, j, k = 0, l = 0;/*iΪ������,k��ʾ���ʸ���*/
	char c[M][N];/*��ʾÿ������*/
	for (i = 0; i < b - 1; i++)
	{
		if (a[i] != ' '&&a[i + 1] == ' ')
			k++;
	}
	k += 1;
	printf("��%d������\n", k);
	int d[M][1];
	for (i = 0; i < k; i++)
		d[i][0] = 0;/*��ʼ��*/
	for (i = 0; i < k; i++)
		for (j = 0; j < N; j++)
		{
			if (a[l] == ' ' || a[l] == '\0')
			{
				j = N;

				l++;
			}
			else
			{
				c[i][j] = a[l]; 
				l++;
			}
		}
		for (i = 0; i < k; i++)/*�������*/
	{
		for (j = 0; j < d[i][0]; j++)
			printf("%c", c[i][j]);
		printf("\n");
	}
	int y;
	char temp[1][M];
	for (i = 0; i<k - 1; i++)
		for (j = i + 1; j<k; j++)
		{
			y = strcmp(c[i], c[j]);
			if (y>0)
			{
				strcpy(temp[1], c[i]);
				strcpy(c[i], c[j]);
				strcpy(c[j], temp[1]);
			}
		}
	j = 0;
	char q[M];
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < M; j++)
			q[i] = c[i][j];
		d[i][0] = count1(q);
		j++;
		printf("%d", d[i][0]);
	}
	for (i = 0; i < k; i++)/*�������*/
	{
		for (j = 0; j < d[i][0]; j++)
			printf("%c", c[i][j]);
		printf("\n");
	}

	return 0;
}
