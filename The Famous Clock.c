#include"stdio.h"
#include"string.h"
int main()
{
    char a[5];
    int count = 0;
    while (scanf("%s", a) != EOF)
    {
        getchar();
        count++;
        if (!strcmp(a, "I"))
            printf("Case %d: 1\n", count);
        else if(!strcmp(a, "II"))
            printf("Case %d: 2\n", count);
        else if(!strcmp(a, "III"))
            printf("Case %d: 3\n", count);
        else if(!strcmp(a, "IV"))
            printf("Case %d: 4\n", count);
        else if(!strcmp(a, "V"))
            printf("Case %d: 5\n", count);
        else if(!strcmp(a, "VI"))
            printf("Case %d: 6\n", count);
        else if(!strcmp(a, "VII"))
            printf("Case %d: 7\n", count);
        else if(!strcmp(a, "VIII"))
            printf("Case %d: 8\n", count);
        else if(!strcmp(a, "IX"))
            printf("Case %d: 9\n", count);
        else if(!strcmp(a, "X"))
            printf("Case %d: 10\n", count);
        else if(!strcmp(a, "XI"))
            printf("Case %d: 11\n", count);
        else if(!strcmp(a, "XII"))
            printf("Case %d: 12\n", count);
    }
    return 0;
}