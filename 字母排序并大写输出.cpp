/* 
 * ×ÖÄ¸ÅÅĞò²¢´óĞ´Êä³ö
 */
#include <stdio.h>
void sort(char str[],int n)
{
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
            if(str[i]>str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
    }
}

int main()
{
    char str[20];
    int flag, n;
    int i;
    gets(str);
    scanf("%d", &n);
    sort(str, n);
    for (i = 0; i < n; i++)
    {
        flag = 0;
        if(str[i]==str[i+1])
            flag = 1;
        if(flag==0)
            printf("%c ", str[i] - 32);
    }
    return 0;
}
