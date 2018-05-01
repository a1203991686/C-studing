/*
 * 请编程读入一个字符串，判断其是否为“回文”（正读和反读都是一样的）。
 * 例如，读入： MADAMIMADAM，输出：YES；
 * 读入： ABCDBA，输出：NO。
 */
#include"stdio.h"
#include"string.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        char s[255];
        scanf("%s", s);
        getchar();
        int length = strlen(s);
        int m = length / 2, i, k = 0;
        for (i = 0; i < m; i++)
            if(s[i]!=s[length-i-1])
                k++;
        if(k==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
