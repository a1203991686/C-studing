/*
 * ���̶���һ���ַ������ж����Ƿ�Ϊ�����ġ��������ͷ�������һ���ģ���
 * ���磬���룺 MADAMIMADAM�������YES��
 * ���룺 ABCDBA�������NO��
 */
#include"stdio.h"
#include"string.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        char s[255];
        scanf("%s", s);
        getchar();
        int length = strlen(s);
        int m = length / 2, i, k = 0;
        for (i = 0; i < m; i++)
            if(s[i]!=s[length-i-1])
                k++;
        if(k==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
