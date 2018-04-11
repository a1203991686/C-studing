#include"stdio.h"
int main()
{
    int a[6][6];
    int i;
    printf("请输入语文成绩:\n");
    for (i = 0; i < 5;i++)
        scanf("%d", &a[i][0]);
    printf("请输入数学成绩:\n");
    for (i = 0; i < 5;i++)
        scanf("%d", &a[i][1]);
    printf("请输入物理成绩:\n");
    for (i = 0; i < 5;i++)
        scanf("%d", &a[i][2]);
    printf("请输入外语成绩:\n");
    for (i = 0; i < 5;i++)
        scanf("%d", &a[i][3]);
    int num[9] = {}, avg[9];
    int j;
    for (i = 0; i < 5;i++)
        for (j = 0; j < 4;j++)
            num[i] += a[i][j];
    
}