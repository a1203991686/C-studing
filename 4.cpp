#include"stdio.h"
#include"string.h"
int main()
{
    //��int����3^100��ֵ
    char a[49];
    int a2[48]={0};
    a2[47] = 1;
    int M = 3, N = 100, i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 47; j >= 0; j--)
            a2[j] *= M;
        for (j = 47; j >= 0; j--)
            if(a2[j]>=10)
            {
                a2[j - 1] += a2[j] / 10;
                a2[j] = a2[j] % 10;
            }
    }
    for (i = 0; i < 48; i++)
        printf("%d", a2[i]);
    printf("\n");
    //��intתchar
    for (i = 0; i < 48; i++)
        a[i] = a2[i] + '0';
    a[48] = '\0';
    printf("3^100Ϊ\n");
    printf("%s", a);
    printf("\n");
    //���������
    char b[48], c[49];
    int a1[48] = {0}, b1[48] = {0};
    scanf("%s", b);
    j = 47;
    for (i = strlen(b) - 1; i >= 0; i--,j--)
    {
        a1[j] = a[j] - '0';
        b1[i] = b[i] - '0';
        if (a1[j] + b1[i] > 9)
        {
            c[j] = a1[j] + b1[i] - 9 + '0';
            b[i - 1]++;
        }
        else
        {
            c[j] = a1[j] + b1[i] + '0';
        }
    }
    printf("3^100��ֵΪ ");
    for (i = 0; i < 48;i++)
        printf("%c", a[i]);
    printf("\n");
    for (i = 48 - strlen(b) - 1; i >= 0; i--)
            c[i] = a[i];
    c[48] = '\0';
    printf("��Ӻ��ֵΪ");
    puts(c);
    return 0;
}