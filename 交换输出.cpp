#include"stdio.h"
int main()
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        int a[n], i, min, mi1;
        for (i = 0; i < n; i++ )
            scanf("%d", &a[i]);
        min = a[0];
        for (i = 0; i < n; i++ )
            if(min>a[i])
            {
                min = a[i];
                mi1 = i;
            }
        a[mi1] = a[0];
        a[0] = min;
        for (i = 0; i < n; i++ )
            printf("%d ", a[i]);
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
/*
#include<stdio.h>  
#include<string.h>  
int main()  
{  
    int n,i,k,x[105],min;  
    while(scanf("%d",&n),n)  
    {  
        memset(x,0,sizeof(x));  
        scanf("%d",&x[0]);  
        min=0;  
        for(i=1;i<n;++i)  
        {  
            scanf("%d",&x[i]);  
            if(x[i]<x[min])//每次都更新，使得该变量为最大值的下标  
            {  
                min=i;  
            }  
        }  
        k=x[0];x[0]=x[min];x[min]=k;//交换  
        printf("%d",x[0]);  
        for(i=1;i<n;++i)//输出......  
        {  
            printf(" %d",x[i]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
*/