/*
 * @Author: littlecorgi 
 * @Date: 2018-03-24 09:33:55 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-03-24 15:01:39
 */
/*
 * ����10��ѧ��5�Ź��εĳɼ��������ġ���ѧ��������ѧ�������
 * ���ֽܷ��������������ѧ���ĳɼ����ܷ֣�
 * ����ܷ���ͬ�����ĸ��߾�ǰ
 */
#include"stdio.h"
int main()
{
	int b[10][6];/*b�ĵ�6��Ϊѧ���ܷ�*/
	int c[1][6];
	int i, j, x;
	printf("������ѧ���ɼ�������������ѧ�����Ƴɼ���:\n");
	for (i = 0; i < 10; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &b[i][j]);
	j = 0;
	while (j < 10)
	{
		b[j][5] = 0;
		for (i = 0; i < 5; i++)
		{
			b[j][5] += b[j][i];
		}
		j++;
	}/*�����ѧ���ܷ�*/
	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 10; j++)
			if (b[i][5] < b[j][5])
				for (x = 0; x < 6; x++)
				{
					c[1][x] = b[i][x];
					b[i][x] = b[j][x];
					b[j][x] = c[1][x];
				}/*����*/
	for (i = 0; i < 10; i++)
		for (j = i + 1; j < 9; j++)
			if (b[i][5] == b[j][5])
				if (b[i][0] < b[j][0])
					for (x = 0; x < 6; x++)
					{
						c[1][x] = b[i][x];
						b[i][x] = b[j][x];
						b[j][x] = c[1][x];
					}/*����ܷ�һ�����ٸ������ĳɼ�����*/
	printf(" ���� ��ѧ Ӣ�� ���� ���� �ܷ�\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%5d", b[i][j]);
		printf("\n");
	}
	return 0;
}