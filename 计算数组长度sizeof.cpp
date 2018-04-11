#include"stdio.h"
#define SIZE(a,b) sizeof(a)/sizeof(b)
int main()
{
    int a0[4]={1,2,3,4},i;
    int a1[6] = {5, 6, 7, 8, 5, 6}, j;
    int a2[8] = {9, 10, 11, 12, 9, 10, 11, 12};
    int *a[3] = {a0, a1, a2};/*初始化仅适用于vc++*/
    int size[3] = {SIZE(a0, int), SIZE(a1, int), SIZE(a2, int)};
    for (i = 0; i < 3;i++)
        {
            for (j = 0; j < size[i];j++)
                printf("%5d", a[i][j]);
            printf("\n");
        }
    return 0;
}