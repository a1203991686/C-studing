#include"stdio.h"
#include"string.h"
#include"math.h"
int main()
{
	int N;
	scanf("%d", &N);
	while(N--)
	{
		int maxn = 0, minn, i, j, b[26];
		char a[255];
		scanf("%s", a);
		int x = strlen(a);
		for (i = 0; i < 26; i++)
			b[i] = 0;
		for (i = 0; i < x; i++)
			b[a[i] - 'a']++;
		for (i = 0; i < 25; i++ )
			for (j = i + 1; j < 26; j++)
				if(b[i]>b[j])
				{
					int temp;
					temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
		for (i = 0; i < 26; i++)
			if(b[i]!=0)
			{
				minn = b[i];
				i = 26;
			}
		maxn = b[25];
		j = 0;
		for (i = 2; i <= sqrt(maxn - minn); i++)
			if((maxn-minn)%i==0)
				j++;
		if(j==0&&(maxn-minn)!=0&&(maxn-minn)!=1)
			printf("Lucky Word\n%d\n", maxn - minn);
		else
			printf("No Answer\n0\n");
	}
}
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[100], a[26] = {0};
        int d, max, min, i;
        scanf("%s", s);
        for (i = 0; s[i] != '\0'; i++)
        {
            a[s[i] - 'a']++;
        }
        max = 0;
        for (i = 0; i < 26; i++)
        {
            if (a[i] > a[max])
            {
                max = i;
            }
        }
        min = max;
        for (i = 0; i < 26; i++)
        {
            if (a[i] < a[min] && a[i] > 0)
            {
                min = i;
            }
        }
        d = a[max] - a[min];
        for (i = 2; i < d; i++)
        {
            if (d % i == 0)
            {
                break;
            }
        }
        if (d == i)
        {
            printf("Lucky Word\n%d\n", d);
        }
        else
        {
            printf("No Answer\n%d\n", 0);
        }

    }
return 0;
}
*/