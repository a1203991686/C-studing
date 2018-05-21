/*#include"stdio.h"
#include"string.h"
int main()
{
    char a[255], b[50][50];//a为句子，b为char型二维数组，相当于由单词构成的一维数组，b数组每一行就是一个单词
    gets(a);//读入句子
    int i, j = 0, k = 0, x = strlen(a);//x为句子长度
    for (i = 0; i < x; i++)
    {
        if(a[i]==' ')//当a[i]是空格时，代表这是一个单词的结尾，然后b数组换行
        {
            b[j][k] = '\0';//要构成一个字符串，就需要在字符的末尾加上一个\0，
            j++;//j+1，代表b数组新的一行
            k=0;//新的一行后，k要从0开始，代表一个单词的开始
        }
        else//当a[i]不是空格时，把当前的a[i]的值存入二维数组，
        {
            b[j][k] = a[i];
            k++;
        }
    }
    b[j][k] = '\0';//要构成一个字符串，就需要在字符的末尾加上一个\0，由于在for循环中，最后一个单词最末尾只是单词的末尾字母而不是\0，所以需要手动在此处加入\0
    //单词镜像反转
    for (k = 0; k <= j; k++)//经过上面的for循环，j此时相当于单词的个数，所以for k一直到k等于j，然后对每个b[k]也就是每个单词进行镜像翻转
    {
        int y = strlen(b[k]);//确定每个单词长度
        int l, z = y / 2;//因为每次翻转就是把从前面开始吧每位元素与后面相对应位上元素对调，所以下面只需要for到y/2
        for (l = 0; l < z; l++)//镜像翻转
        {
            char temp = b[k][l];
            b[k][l] = b[k][y - l - 1];
            b[k][y - l - 1] = temp;
        }
    }
    //输出
    for (k = 0; k <= j; k++)
        printf("%s ", b[k]);
    printf("\n");
    return 0;
}*/

#include"stdio.h" 
#include"string.h"
int main()
{
	char a[255];
    gets(a);
    int i, j, x;
	x = 0;
	for (i = 0; i <= strlen(a); i++)
	{
		if ((a[i] == ' ') || (i == strlen(a)))
		{
			for (j = 0; j < (i - x) / 2; j++) //i-x为单词长度
			{
				char t = a[j + x];
				a[j + x] = a[(i - x) - j - 1 + x]; //i - x - j + x - 1 = i - j - 1
				a[(i - x) - j - 1 + x] = t;
			}
			x = i++;
		}
	}
	puts(a);
	return 0;
}