/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:54:13 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:54:13 
 */
#include"stdio.h"
#include"math.h"
int main()
{
    int a[255];
    int i, k, j, l = 0, x = 1;
    a[0] = 2;
    for (i = 3; i < 255; i++)
		{
			k = 0;
			for (j = 2; j <= sqrt(i); j++)
				if (i % j == 0)
					k++;
			if (k == 0)
            {
                a[x++] = i;
                l++;
            }
        }
    int M;
    scanf("%d", &M);
    while(M--)
    {
        int n, A, B;
        scanf("%d", &n);
        for (i = 1; i < n;i++)
            if(n<a[i]&&n>a[i-1])
            {
                if(((a[i]-n)>(n-a[i-1]))||((a[i]-n)==(n-a[i-1])))
                {
                    A = a[i - 1];
                    B = n - a[i - 1];
                }
                else
                {
                    A = a[i];
                    B = a[i] - n;
                }
            }
        printf("%d %d\n", A, B);
    }
}
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000010

int table[MAX];
//筛选法建立素数表: 0为素数， 1为非素数 
void buildPrimeTable()
{ 
    table[1]=1;//第0个不用 
    for(int i=2;i*i<MAX;i++)
        if(!table[i])//不是素数的跳过 
            for(int j=i*i;j<MAX;j+=i)
                table[j]=1; //包含因子i的不是素数，标记为1
}

int main()
{
    buildPrimeTable();
    int n,num,numUp,numDown;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        if(table[num]==0)
            printf("%d 0\n",num);
        else
        {
            numUp=numDown=num;
            while(table[numUp]!=0)
                numUp++;
            while(table[numDown]!=0&&numDown>0)
                numDown--;
            if(numDown==0)//如果超过下线 
                printf("%d %d\n",numUp,numUp-num);
            else if(numUp-num>=num-numDown)
                printf("%d %d\n",numDown,num-numDown);
            else
                printf("%d %d\n",numUp,numUp-num);  
        }
    }
    
	//system("PAUSE");
	return 0;
}
*/