/*
 * 整数排序去重输出
 */ 
#include <stdio.h>
void sort(int array[],int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
            if(array[i]<array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
    }
}
int main()
{
    while(!feof(stdin))
    {
        int array[20];
        int flag, n;
        int i;
        scanf("n=%d\n", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &array[i]);
        sort(array, n);
        for (i = 0; i < n; i++)
        {
            flag = 0;
            if (array[i] == array[i + 1])
                flag = 1;
            if (flag == 0)
                printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}
