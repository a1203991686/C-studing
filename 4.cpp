/* 
 * ¾ØÕó¾µÏñÓÚ×ªÖÃ
 */
#include <stdio.h>
#define M 3
#define N 4
int main()
{
    int a[M][N] = {{1, 4, 7, 2}, {3, 6, 9, 10}, {7, 6, 1, 4}}, b[N][M];
    int i, j;
    int t;
    // int s[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            b[i][j] = a[j][i];
    }

    for (i = 0; i < N; i++)
        for (j = 0; j < M / 2; j++)
        {
            t = b[i][j];
            b[i][j] = b[i][M - j - 1];
            b[i][M - j - 1] = t;
        }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            printf("%5d", b[i][j]);
        putchar('\n');
    }
    return 0;
}
