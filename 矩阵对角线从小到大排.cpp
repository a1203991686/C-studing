/*
 * @Author: littlecorgi 
 * @Date: 2018-04-13 18:01:17 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-13 18:04:22
 */
/*
 * ��4x4�׾����4����Сֵ�������������Խ����ϡ�
 * Ҫ��
 * (1)����Ԫ�شӼ������룻
 * (2)�ֱ����±귨��ָ�뷨��������ָ�����ָ�룩ʵ�ֲ�����
 */
#include "stdio.h"
int main()
{
    /*int a[16];
    int i, j, k = 0, temp;
    for (i = 0; i < 16; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 15; i++)
        for (j = i + 1; j < 16; j++)
            if(a[i]>a[j])
			{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    int b[4][4];
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            b[i][j] = a[k];
            k++;
        }
    temp = b[0][1];
    b[0][1] = b[1][1];
    b[1][1] = temp;
    temp = b[0][2];
    b[0][2] = b[2][2];
    b[2][2] = temp;
    temp = b[0][3];
    b[0][3] = b[3][3];
    b[3][3] = temp;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%3d", b[i][j]);
        printf("\n");
    }*/
    int i, j, k = 0, temp;
    int a[16];
    int *p;
    p = &a[0];
    for (i = 0; i < 16; i++)
        scanf("%d", p + i);
    for (i = 0; i < 15; i++)
        for (j = i + 1; j < 16; j++)
            if(*(p+i)>*(p+j))
			{
                temp = (*p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
    int b[4][4];
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            b[i][j] = *(p + k);
            k++;
        }
    temp = b[0][1];
    b[0][1] = b[1][1];
    b[1][1] = temp;
    temp = b[0][2];
    b[0][2] = b[2][2];
    b[2][2] = temp;
    temp = b[0][3];
    b[0][3] = b[3][3];
    b[3][3] = temp;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%3d", b[i][j]);
        printf("\n");
    }
    return 0;
}