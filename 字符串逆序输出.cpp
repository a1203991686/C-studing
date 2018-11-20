#include"stdio.h"
#include"string.h"
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    while(N--)
    {
        char a[255];
        gets(a);
        int i, b = strlen(a);
        for (i = b - 1; i >= 0; i--)
            if(a[i]>96&&a[i]<123)
                printf("%c", a[i]);
        printf("\n");
    }
    return 0;
}