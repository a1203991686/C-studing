#include"stdio.h"
#include"string.h"
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        char a[255], b[26] = {'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y'};
        scanf("%s", a);
        int i, x = 0, c = strlen(a);
        for (i = 0; i < c; i++)
            if(a[i]>96&&a[i]<123)
                x++;
        int y = x % 26;
        printf("%c\n", b[y]);
    }
    return 0;
}