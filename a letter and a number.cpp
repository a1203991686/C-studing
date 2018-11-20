#include"stdio.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        char x;
        int y, i;
        getchar();
        scanf("%c", &x);
        scanf("%d",&y);
        if(x<='[')
            i = x - 'A'+1;
        else
            i = -(x-'a'+1);
        printf("%d\n", i + y);
    }
    return 0;
}
