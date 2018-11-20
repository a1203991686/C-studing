#include <stdio.h>
int a, b, c, d;
int yuefen(int fenzi,int fenmu)//找最大公约数   
{
    int da = fenzi, xiao = fenmu;
    if(da<xiao)
    {
        int t = da;
        da = xiao;
        xiao = t;
    }  
    while(da%xiao!=0)  
    {
        da = da / xiao;
        if(da<xiao)  
        {
            int t = da;
            da = xiao;
            xiao = t;
        }  
    }
    return xiao;
}  
int main()  
{
    char s[7];
    while(scanf("%s",s)!=EOF)  
    {
        a = s[0] - 48;
        b = s[2] - 48;
        c = s[4] - 48;
        d = s[6] - 48;
        if(s[3]=='+')  
        {  
            if(a==0&&c==0)//0和一个数不能找最大公约数   
            {
                printf("0\n");
            }  
            else  
            {
                int fenzi = a * d + c * b;
                int fenmu = b * d;
                int gongyueshu = yuefen(fenzi, fenmu);
                fenzi = fenzi / gongyueshu;
                fenmu = fenmu / gongyueshu;
                if(fenmu==1)//分母为1只输出分子   
                {
                    printf("%d\n", fenzi);
                }  
                else  
                {
                    printf("%d/%d\n", fenzi, fenmu);
                }  
            }  
        }  
        if(s[3]=='-')  
        {  
              
            if((double)a/b<(double)c/d)//先判断大小   
            {
                int fenmu = b * d;
                int fenzi = b * c - a * d;
                int gongyueshu = yuefen(fenzi, fenmu);
                fenzi = fenzi / gongyueshu;
                fenmu = fenmu / gongyueshu;
                if(fenmu==1)//分母为1只输出分子   
                {
                    printf("-%d\n", fenzi);
                }  
                else  
                {
                    printf("-%d/%d\n", fenzi, fenmu);
                }  
            }  
            else  
            {  
                if((a==c&&b==d)||(a==0&&c==0))//分子为0   
                {
                    printf("0\n");
                }  
                else  
                {
                    int fenmu = b * d;
                    int fenzi = a * d - b * c;
                    int gongyueshu = yuefen(fenzi, fenmu);
                    fenzi = fenzi / gongyueshu;
                    fenmu = fenmu / gongyueshu;
                    if(fenmu==1)//分母为1只输出分子   
                    {
                        printf("%d\n", fenzi);
                    }  
                    else  
                    {
                        printf("%d/%d\n", fenzi, fenmu);
                    }  
                }  
            }  
        }  
    }
    return 0;
}  