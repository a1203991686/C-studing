/*
 * @Author: littlecorgi 
 * @Date: 2018-04-10 20:24:06 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-10 20:28:52
 */
/*
 * ����
 * ���ڸ���N������0<N<1000��������Ҫ����д��һ�������ҳ���N�����е���������������͡�
 * ����
 * ��һ�и�������M(0<M<10)����������������
 * ÿ��������ݵ�һ�и���N���������������ݵ�������
 * ��������N����ΪҪ���Ե����ݣ�ÿ����С��1000
 * ���
 * ÿ��������ݽ��ռһ�У���������Ĳ������ݵ�����������
 * ��������
 * 3
 * 5
 * 1 2 3 4 5
 * 8
 * 11 12 13 14 15 16 17 18
 * 10
 * 21 22 23 24 25 26 27 28 29 30
 * �������
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