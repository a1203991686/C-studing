#include"stdio.h"
#include"string.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        char alphabat[10] = {'O', 'O', 'T', 'T', 'F', 'F', 'S', 'S', 'E', 'N'};
        char a[10];
        scanf("%s", a);
        int b = strlen(a), i;
        for (i = b - 1; i >= 0; i--)
            printf("%c", alphabat[a[i] - 48]);
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
int main()
{
    int t, num;
    char a[] = {'O', 'O', 'T', 'T', 'F', 'F', 'S', 'S', 'E', 'N'};
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &num);
        while (num)
        {
            printf("%c", a[num % 10]);
            num /= 10;
        }
        printf("\n");
    }
}*/