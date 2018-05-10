#include <stdio.h>
int recursion(int n,int d);
int main()
{
    int n;
    printf("输入n,n应该是[1,66]的一个数:");
    scanf("%d", &n);
    while(n<0||n>66)
	{
        printf("输入错误,n应该是[1,66]的一个数");
        printf("请重新输入n:");
        scanf("%d", &n);
    }
    printf("第%d个人的年龄为:%d岁\n", n, recursion(n, 2));
    return 0;
}
int recursion(int n,int d)
{
    int rec;
    if(n==1)
        return 10;
    rec = recursion(n - 1, d) + d;
    return rec;
}
