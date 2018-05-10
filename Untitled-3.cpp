#include <stdio.h>
#define LEN 10
void insertsort(char *arr,int len)
{
    int i, j;
    char temp;
    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        j = i - 1;
        while((j>=0)&&(arr[j]>temp))
        {
            arr[j + 1] = arr[j];
            j--;
        }
		if(j!=i-1)
            arr[j + 1] = temp;
    }
}
int main()
{
    char arr[LEN];
    for (int i = 0; i < LEN; i++)
        scanf("%c\n", &arr[i]);
    printf("-----sort------\n");
    insertsort(arr, LEN);
    for (int i = 0; i < LEN; i++)
        printf("%c ", arr[i]);
    return 0;
}
