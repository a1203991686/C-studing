#include <stdio.h>
#define weishu 4000
int main() 
{
    int cun[weishu];
    int a, b;
    int zhishu, dishu;
    for (a = 0; a < weishu; a++)
        cun[a] = 0;
    cun[weishu - 1] = 1;
    printf("输入底数:");
    scanf("%d", &dishu);
    printf("输入指数:");
    scanf("%d", &zhishu);
    for (b = 0; b < zhishu; b++)
    {
        for (a = weishu - 1; a >= 0; a--)
            cun[a] *= dishu;
        for (a = weishu - 1; a >= 0; a--)
            if (cun[a] >= 10)
            {
                cun[a - 1] += cun[a] / 10;
                cun[a] %= 10;
            }
    }
    for (a = 0; a < weishu; a++)
        if (cun[a] != 0)
            break;
    for (a; a < weishu; a++)
        printf("%d", cun[a]);
}