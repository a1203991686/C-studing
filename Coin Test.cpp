/*#include"stdio.h"
#include"math.h"
int funshu(int n, int m);
int main()
{
    int N, i, a = 0, b = 0, c = 0, j = 0;
    scanf("%d", &N);
    char x[N + 1];
    scanf("%s", x);
    for (i = 0; i < N; i++)
    {
        if(x[i]=='U')
            a++;
        if(x[i]=='D')
            b++;
        if(x[i]=='S')
            c++;
    }
    if(c>0)
    {
        printf("bingo\n");
        j++;
    }
    int y = a / N;
    if(!j)
    {
        if (fabs(y - 0.5) > 0.003)
            printf("Fail\n");
        else
            printf("%d/%d\n", a / funshu(a, N), N / funshu(a, N));
    }
}
int funshu(int n,int m)
{
    int temp,r;
   //把大的数放在n里面 
   if(n<m)
   {
       temp = n;
       n = m;
       m = temp;
   }
    while(m!=0)
    {
        r = n % m;
        n = m;
        m = r;  
    }
    return n;
}*/
#include"stdio.h"
int main()
{
    int a, Bingo = 0, i, k, b, c; //设置标志Bingo。不为0则输出Bingo
    double right, left;
    scanf("%d\n", &a); //投掷硬币的总数
    char condition[a + 10];
    gets(condition);
    for (i = 0; i < a; i++)
    {
        if (condition[i] == 'U')
            right++;
        if (condition[i] == 'D')
            left++;
        if ((condition[i] == 'S') || (condition[i] == 's'))
            Bingo = 1;
    }
    if(Bingo==1)
        printf("Bingo\n");
    else
    {
        if((right*2)==a)
            printf("1/2\n");
        else
        {
        if((right/a<0.5)&&((right/a)>=0.003))//概率为0.5时输出1/2
        {
            b = right, c = a; //化简分子分母，约分
            for (k = 2; k <= right; k++)
            {
                if ((b % k == 0) && (c % k == 0))
                    b = b / k, c = c / k, k = 2;
            }
        printf("%d/%d\n", b, c);
        }
        else
            printf("Fail\n");
        }
    }
    return 0;
}