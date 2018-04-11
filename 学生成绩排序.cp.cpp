/*
 * @Author: littlecorgi 
 * @Date: 2018-03-24 09:33:55 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-03-24 15:01:39
 */
/*
 * 输入10个学生5门功课的成绩（如语文、数学、物理、化学、生物），
 * 按总分降序排列输出所有学生的成绩和总分；
 * 如果总分相同，语文高者居前
 */
#include"stdio.h"
int main()
{
	int b[10][6];/*b的第6行为学生总分*/
	int c[1][6];
	int i, j, x;
	printf("请输入学生成绩：（请先输入学生各科成绩）:\n");
	for (i = 0; i < 10; i++)
		for (j = 0; j < 5; j++)
			scanf_s("%d", &b[i][j]);
	j = 0;
	while (j < 10)
	{
		b[j][5] = 0;
		for (i = 0; i < 5; i++)
		{
			b[j][5] += b[j][i];
		}
		j++;
	}/*计算该学生总分*/
	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 10; j++)
			if (b[i][5] < b[j][5])
				for (x = 0; x < 6; x++)
				{
					c[1][x] = b[i][x];
					b[i][x] = b[j][x];
					b[j][x] = c[1][x];
				}/*排序*/
	for (i = 0; i < 10; i++)
		for (j = i + 1; j < 9; j++)
			if (b[i][5] == b[j][5])
				if (b[i][0] < b[j][0])
					for (x = 0; x < 6; x++)
					{
						c[1][x] = b[i][x];
						b[i][x] = b[j][x];
						b[j][x] = c[1][x];
					}/*如果总分一样，再根据语文成绩排序*/
	printf(" 语文 数学 英语 理综 文综 总分\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%5d", b[i][j]);
		printf("\n");
	}
	return 0;
}