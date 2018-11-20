#include"stdio.h"
#include"string.h"
int main()
{
    int T;
    scanf("%d", &T);
    getchar();
    while(T--)
    {
        int a[26] = {0}, i;
        char s[1011];
        gets(s);
        int b = strlen(s);
        for (i = 0; i < b; i++)
            a[s[i] - 'a']++;
        int max = 0, c;
        // for (i = 0; i < 26; i++)
            // printf("%d,%d\n", i, a[i]);
        for (i = 0; i < 26; i++)
            if(max<a[i])
            {
                max = a[i];
                c = i;
            }
        for (i = 0; i < 26; i++)
            if(a[i]==max)
            {
                c = i;
                break;
            }
        printf("%c\n", c + 'a');
    }
    return 0;
}