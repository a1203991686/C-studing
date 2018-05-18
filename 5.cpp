/* 
 * 
 */
/*#include <stdio.h>
#include <string.h>
int main()
{
    char str1[132], str2[132][100];
    int i, j, k, m = 0, n = 0, flag;
    gets(str1);
    for (i = 0; str1[i]; i++)
    {
        if((str1[i]<='9'&&str1[i]>='0')||str1[i]<='z'&&str1[i]>='a'||str1[i]<='Z'&&str1[i]>='A')
            if(str1[i]<='Z'&&str1[i]>='A')
                str1[i] += 32;
    }
    n = 0;
    for (i = 0; str1[i] <= '9' && str1[i] >= '0' || str1[i] <= 'z' && str1[i] >= 'a'; i++)
       if(str1[i]<='z'&&str1[i]>='a')
           str2[n][m++] = str1[i];
    n++;
    for (i; str1[i]; i++)
    {
        if((!(str1[i]<='z'&&str1[i]>='a'))&&str1[i+1]<='z'&&str1[i+1]>='a')
        {
            m = 0;
            for (j = i + 1; (str1[j] <= 'z' && str1[j] >= 'a') && str1[j]; j++)
                ;
            for (k = i + 1; k < j; k++)
                str2[n][m++] = str1[k];
            n++;
        }
    }
    char temp[100];
    putchar('\n');
    for (i = 0; i < n; i++)
        puts(str2[i]);
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(str2[i], str2[j]) > 0)
            {
                strcpy(temp, str2[i]);
                strcpy(str2[i], str2[j]);
                strcpy(str2[j], temp);
            }
    putchar('\n');
    for (i = 0; i < n; i++)
    {
        flag = 0;
        if(strcmp(str2[i],str2[i+1])==0)
            flag = 1;
        if(flag==0)
            puts(str2[i]);
    }
    return 0;
}*/
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