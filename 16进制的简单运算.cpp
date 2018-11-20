#include"stdio.h"
#include"string.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int a, b;
        char c;
        scanf("%x%c%x", &a, &c, &b);
        printf("%o\n", c == '+' ? a + b : a - b);
    }
    return 0;
}