/*
 * @Author: littlecorgi 
 * @Date: 2018-03-24 15:17:35 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-03-24 15:20:55
 */
/*
 *	����һ��������n������n��n�Ļ÷�������n=5ʱ������Ϊ
 *	1	2	3	4	5
 *	16	17	18	19	6
 *	15	24	25	20	7
 *	14	23	22	21	8
 *	13	12	11	10	9
 */
#include<stdio.h>
int main()
{
	int a[100][100], i, j, k, m, n;//�������鼰����
	k = 0; //���뷽��Ľ���
	printf("���������n:\n");
	scanf("%d", &n);
	if(n%2==0)
		m = n / 2;
	else
		m = n / 2 + 1;
	for (i = 0; i < m; i++)
	{
		for (j = i; j < n - i; j++) //�Ե�i�д����Ҹ�ֵ
		{
			k++;
			a[i][j] = k;
		}
		for (j = i + 1; j < n - i; j++) //��n-i�д��ϵ��¸�ֵ
		{
			k++;
			a[j][n - i - 1] = k;
		}
		for (j = n - i - 2; j >= i; j--) //�Ե�n-i�д��ҵ���ֵ
		{
			k++;
			a[n - i - 1][j] = k;
		}
		for (j = n - i - 2; j >= i + 1; j--) //�Ե�i�д��µ��ϸ�ֵ
		{
			k++;
			a[j][i] = k;
		}
	}//�������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%-4d ", a[i][j]);
		printf("\n");
	}
	return 0;
}