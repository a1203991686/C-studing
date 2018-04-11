#include"stdio.h"
#define M 3
#define N 3
int main()
{
    int a[M][N], b[M][N];
    int (*pa)(N) = a;
    int (*pb)(M) = b;
    int *ra = a[0], *rb = b[0];
    int i, j;
    //......
    for (i = 0; i < N;i++)
        for (j = 0; j < M;j++)
            *(*(pb + i) + j) = *(*(pa + j) + i);
            *(rb + i * M + j) = *(ra + j * N + i);
    
}