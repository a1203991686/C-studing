#include"stdio.h"
#include"string.h"
char str[110];
int change(int len)
{
    int i = 0, j = len - 1;
    while(i<j)
    {
		if (str[i]!=str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str);
        getchar();
        int len = strlen(str);
        while(!(len&1) && change(len))
            len /= 2;
        printf("%d\n", len);
    }
    return 0;
}
