#include"stdio.h"
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int all = 0, i, j; /*i为现在的兑换的香烟数，j为现在剩下的旧香烟*/
        i = n;
        all = n;
        while(i>k)
        {
            j= i / k;
            all += j;
            i = i - k * j;
            i = i +j;
        }
        printf("%d\n", all);
    }
}
/*
#include"stdio.h"
int main()
{
    int n;//n个空水瓶
    int x = 0; //x代表可以喝到的汽水瓶个数
    int i;//代表剩下的
    int j;
    scanf("%d", &n);
    if(n>2)
    {
        i = n;
        while(i>=3)
        {
            j= i / 3;
            x += j;
            i = i - 3 * j;
            i = i +j;
        }
        if(i==2)
            x += 1;
        printf("%d", x);
    }
    else
    {
        printf("汽水瓶不够 \n");
    }
}
*/