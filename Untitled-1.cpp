#include"stdio.h"
#include"string.h"
int main()
{
	char a[500], b[50][50];
	gets(a);
	puts(a);
	int i, j, k, x = strlen(a);
	j = 0, k = 0;
	for (i = 0; i < x; i++)
	{
		if ((a[i] > 64 && a[i] < 91) || (a[i] > 96 && a[i] < 123))
		{
			if (a[i] > 64 && a[i] < 91)
			{
				b[j][k] = a[i] + 32;
				k++;
			}
			else
			{
				b[j][k] = a[i];
				k++;
			}
		}
		else
		{
			b[j][k] = '\0';
			j++;
			k = 0;
		}
	}
	for (i = 0; i < j - 1; i++)
		for (k = i + 1; k < j; k++)
			if (strcmp(b[i], b[k]) > 0)
			{
				char temp[255];
				strcpy_s(temp, b[i]);
				strcpy_s(b[i], b[k]);
				strcpy_s(b[k], temp);
			}
	for (i = 0; i < j; i++)
	{
		if (strcmp(b[i], b[i - 1]) == 0)
			i++;
		else
		{
			printf("%s ", b[i]);
		}

	}
	return 0;
}