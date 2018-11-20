#include"stdio.h"
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int y, m, d, day = 0;
        scanf("%d %d %d", &y, &m, &d);
        int i;
        for (i = 1; i < m; i++)
            switch(i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    day += 31;
                    break;
                case 2:
                {
                    if(y%4==0)
                    {
                        day += 29;
                        break;
                    }
                    else
                    {
                        day += 28;
                        break;
                    }
                }
                case 4:
                case 6:
                case 9:
                case 11:
                    day += 30;
                    break;
            }
        day += d;
        printf("%d\n", day);
    }
    return 0;
}