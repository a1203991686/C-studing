/*
 * @Author: littlecorgi 
 * @Date: 2018-03-24 09:22:02 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-03-24 09:28:56
 */
/*
 * ��һ��n��m������������Ծ����е�Ԫ���������У�
 * ʹ��ͬ��Ԫ�����ұ�Ԫ�ش�����ߵ�Ԫ�أ�
 * ͬ��Ԫ�����±ߵ�Ԫ�ش����ϱߵ�Ԫ��
 */
#include"stdio.h"
int main()
{
    const int n = 3, m = 4;
    int a[n][m] = {{4, 7, 6, 2}, {1, 5, 3, 8}, {9, 10, 45, 85}};
    int b[n * m];
    int i, j, x, temp;
    x = 0;
    for (i = 0; i < n;i++)
        for (j = 0; j < m;j++)
                b[x++] = a[i][j];/*�ȰѶ�ά����ת��Ϊһά����*/
    for (i = 0; i < n * m ;i++)
        for (j = i + 1; j < n * m - 1;j++)
        if(b[i]>b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }/*��һά�����������*/
    x = 0;
    for (i = 0; i < n;i++)
        for (j = 0; j < m;j++)
                a[i][j] = b[x++];/*�ٰѰ��������е�һά����ת��Ϊ��ά����*/
    for (i = 0; i < n;i++)
        {
            for (j = 0; j < m;j++)
                printf("%4d", a[i][j]);
            printf("\n");
        }/*���*/
    return 0;
}