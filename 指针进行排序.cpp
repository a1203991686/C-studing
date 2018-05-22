#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int **p,int n);
int main()
{
    int **p, *data;
    int i, n;
    srand(time(NULL));
    printf("输入数组元素个数:");
    scanf("%d", &n);
    data = (int *)malloc(n * sizeof(int));
    p = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        data[i] = rand() % 100;
    for(i=0;i<n;i++)
        p[i] = &data[i];
    sort(p, n);
    return 0;
}
void sort(int **p,int n)
{
    int i, j, *temp;
    printf("原数组为:\n");
    for (i = 0; i < n; i++)
        printf("%-4d", **(p + i));
    printf("\n");
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (**(p + i) > **(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
    printf("排序后的数组为:\n");
    for (i = 0; i < n; i++)
        printf("%-4d", **(p + i));
    printf("\n");
}
