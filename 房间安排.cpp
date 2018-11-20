#include"stdio.h"
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N, i, room = 0, s[365] = {0};//s为天数
        scanf("%d", &N);
        while(N--)
        {
            //a房间数 b开始入住时间 c住的时间
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            for (i = b; i < b + c; i++)
            {
                s[i] += a;
                if(room<s[i])
                    room = s[i];
            }
        }
        printf("%d\n", room);
    }
    return 0;
}