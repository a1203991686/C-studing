/* 
 * 统计单词个数
 */
#include <stdio.h>
int main()
{
    char str[132];
    int count = 0;
    int i = 0;
    gets(str);
    while(str[i])
    {
        if(i==0)
            str[i] -= 32;
        if(str[i]==' ')
        {
            count++;
            str[i + 1] -= 32;
        }
        i++;
    }
    printf("%dwords ", count + 1);
    puts(str);
    return 0;
}
