#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
    int M;
    scanf("%d", &M);
    while(M--)
    {
        char a[8], b[8];
        scanf("%s", a);
        getchar();
        int c = strlen(a), i;
        for (i = 0; i < c - 1; i++)
            b[i] = a[i + 1];
        b[c - 1] = '\0';
        int d = atoi(b);
        printf("%d\n", d);
    }
}