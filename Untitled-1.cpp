#include<stdio.h>
#include<math.h>
void find_prime(int begin, int end);        /*求素数函数*/
void find_absoluteprime(int begin, int end); /*求绝对素数函数*/
void narcissus_number(int begin, int end);   /*求水仙花数函数*/
void perfect_number(int begin, int end);     /*求完全数函数*/
void amicable_number(int begin, int end);    /*求互满数函数*/
int main()
{
    printf("10000以内的素数为\t");
    find_prime(1, 10000); /*调用求素数函数*/
    printf("10000以内的绝对素数为\t");
    find_absoluteprime(1, 10000); /*调用求绝对素数函数*/
    printf("10000以内的水仙花数为\t");
    narcissus_number(100, 1000); /*调用求水仙花数函数*/
    printf("10000以内的完全数为\t");
    perfect_number(1, 10000); /*求完全数函数*/
    printf("10000以内的互满数为\t");
    amicable_number(1, 10000); /*求互满数函数*/
    return 0;
}
void  find_prime(int begin,int end)
{
    int m, i;
    int flag; /*判断变量*/
    for (m = begin; m <= end; m++)
    {
        flag = 0; /*对flag初始化*/
        for (i = 2; i <= sqrt(m); i++)
            if (m % i == 0)
            {
                flag = 1; /*当m不是素数时,flag=1*/
                break;
            }
		if(flag==0) /*当flag=0时,m为一个素数*/
		    if(m!=1)
                printf("%d\t", m); /*m为素数时,输出m*/
    }
    printf("\n"); /*打印空行*/
} 
void  find_absoluteprime(int begin,int end)
{
    int m, n, i;
    int flag;
    int a[5];
    for (m = begin; m <= end; m++)
    {
        flag = 0;
        for (i = 2; i <= sqrt(m); i++)
            if (m % i == 0)
            {
                flag = 1;
                break;
            }
		if(flag==0) 
		{
            a[4] = m / 10000; /*取出m的万位*/
            a[3] = m / 1000 % 10; /*取出m的千位*/
            a[2] = m / 100 % 10;  /*取出m的百位*/
            a[1] = m / 10 % 10;   /*取出m的十位*/
            a[0] = m % 10;        /*取出m的个位*/
            if(m>=10&&m<100)/*对[10,100)的m进行逆序并判断(逆序是否为素数)*/
			{
                n = a[0] * 10 + a[1];
                for (i = 2; i < sqrt(n); i++)
                    if (n % i == 0)
                    {
                        flag = 1;
                        break;
                    }
				if(flag==0)
                    printf("%d\t", m);
            }
			if(m>=100&&m<1000)/*对[100,1000)的m进行逆序并判断(逆序是否为素数)*/
			{
				n=a[0]*100+a[1]*10+a[2];
                for (i = 2; i < sqrt(n); i++)
                    if (n % i == 0)
                    {
                        flag = 1;
                        break;
                    }
				if(flag==0)
                    printf("%d\t", m);
            }
				if(m>=1000&&m<10000)/*对[1000,10000)的m进行逆序并判断(逆序是否为素数)*/
			{
                n = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
                for (i = 2; i < sqrt(n); i++)
                    if (n % i == 0)
                    {
                        flag = 1;
                        break;
                    }
				if(flag==0)
                    printf("%d\t", m);
            }
		}
	}
    printf("\n");
} 
void  narcissus_number(int begin,int end)
{
    int m;
    int a[3];
    for (m = begin; m <= end; m++)
    {
        a[2] = m / 100 % 10; /*取出m的百位*/
        a[1] = m / 10 % 10;  /*取出m的十位*/
        a[0] = m % 10;       /*取出m的个位*/
        if(m==(a[0]*a[0]*a[0]+a[1]*a[1]*a[1]+a[2]*a[2]*a[2]))/*当m等于它各个数位的立方和时,输出m*/
            printf("%d\t", m);
    }
    printf("\n");
}
void perfect_number(int begin,int end)
{
    int s, i, m;
    for (m = begin; m <= end; m++)
    {
        s = 0; /*对s进行初始化*/
        for (i = 1; i < m; i++)
            if (m % i == 0)
                s += i;           /*当i是m的因数时,对s加i*/
        if(m==s)
            printf("%d\t", m); /*若m等于它的因数和,输出m*/
    }
    printf("\n");
}
void amicable_number(int begin,int end)
{
    int i, m, n;
    int s1, s2;
    int j = 0, count = 0;
    int a[100];
    for (m = begin; m <= end; m++)
    {
        s1 = 0;
        s2 = 0; /*对s1,s2进行初始化*/
        for (i = 1; i < m; i++)
            if (m % i == 0)
                s1 += i; /*当i是m的因数时,对s加i*/
        n = s1;          /*将s1的值赋给n*/
        for (i = 1; i < n; i++)
            if (n % i == 0)
                s2 += i; /*当i是n的因数时,对s加i*/
        if(s2==m&&n!=m) /*若n的因数和等于m,将m存入数组a[100],count++*/
		{
            a[j++] = m;
            count++;
        }
	}
    for (i = 0; i < count; i = i + 2)
        printf("%d,%d\t", a[i], a[i + 1]);
    printf("\n");
}