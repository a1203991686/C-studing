#include"stdio.h"
#include"string.h"
int main()
{
    int m, i;
    scanf("%d", &m);
    while(m--)
    {
        getchar();
        char a[255];
        scanf("%s", a);
        for (i = 0; i < strlen(a); i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                a[i] -= 32;
            }
            else if(a[i]>='A'&&a[i]<='Z')
            {
                a[i] += 32;
            }
            
        }
        puts(a);
    }
    return 0;
}