/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:53:42 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:53:42 
 */
#include"stdio.h"
#include"string.h"
int main()
{
	int M;
	scanf("%d", &M);
	getchar();
	while (M--)
	{
		char a[17][3] = { "A", "A#","B", "Bb", "C", "C#", "Db", "D", "D#", "Eb", "E", "F", "F#", "Gb", "G", "G#", "Ab" };
		int i;
		int x;
		char note[3], tone[6];
		scanf("%s %s", note, tone);
		printf("%s %s", note, tone);
		for (i = 0; i < 17; i++)
			if (strcmp(note, a[i]))
				x = i;
		switch (x)
		{
		case 1:printf("Bb %s\n", tone);
			break;
		case 2:printf("A# %s\n", tone);
			break;
		case 5:printf("Db %s\n", tone);
			break;
		case 6:printf("C# %s\n", tone);
			break;
		case 8:printf("Eb %s\n", tone);
			break;
		case 9:printf("D# %s\n", tone);
			break;
		case 12:printf("Gb %s\n", tone);
			break;
		case 13:printf("F# %s\n", tone);
			break;
		case 15:printf("Ab %s\n", tone);
			break;
		case 16:printf("G# %s\n", tone);
			break;
			/*case 1:
			case 2:
			case 5:
			case 6:
			case 8:
			case 9:
			case 12:
			case 13:
			case 15:
			case 16:*/
		default:
			printf("UNIQUE\n");
			break;
		}
	}
}
/*#include<iostream>
#include<string>
using namespace std;
string trans(string a)
{
	string b = "";
	if (a[1] == '#')
	{
		b += char((a[0] - 'A' + 1) % 7 + 'A');
		b += 'b';
	}
	else
	{
		b += char((a[0] - 'A' + 6) % 7 + 'A');
		b += '#';
	}
	return b;
}
int main()
{
	string a, b;
	for (int t = 1; cin >> a >> b; t++)
	{
		cout << "Case " << t << ": ";
		if (a.length() == 1)
			cout << "UNIQUE" << endl;
		else
			cout << trans(a) << " " << b << endl;
	}
	return 0;
}*/