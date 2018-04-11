#include<stdio.h>
#define M 6 
#define N 6
int main()
{
    int a[M]={1,3,5,7,9,11}; 
    int b[N]={2,4,6,8,10,12}; 
    int c[M+N]; 
    int i=0,j=0,k=0;//将 a[M]与 b[N]中的元素进行比较，然后赋值到 c[M+N]
    while (i < M && j < N)
    { 
        if (a[i] < b[j]) 
            c[k++] = a[i++];
        else c[k++] = b[j++];
    }//将 a[M]与 b[N]中没有赋值到 c[M+N]的元素赋值到 c
    while (i < M) 
        c[k++] = a[i++]; 
    while (j < N) 
        c[k++] = b[j++];//输出 c[M+N]
    for(i=0;i<M+N;i++) 
        printf("%d ",c[i]); 
    return 0;
}
