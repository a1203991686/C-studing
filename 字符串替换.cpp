#include"stdio.h"
#include"string.h"
int main()
{
	const int M = 255;
	char a[M];
	int n;
	while (scanf("%d", &n) != EOF)
	{
		gets(a);
		int i, b = strlen(a), j, c = 0;
		for (i = 0; i < b - 2; i++)
			if (a[i] == 'y'&&a[i + 1] == 'o'&&a[i + 2] == 'u')
			{
				a[i] = 'w';
				a[i + 1] = 'e';
				a[i + 2] = ' ';
				c++;
				for (j = i + 2; j < b - 1; j++)
					a[j] = a[j + 1];
			}
		a[b - c] = '\0';
		puts(a);
	}
}