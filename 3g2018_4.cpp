#include"stdio.h"
#include"string.h"
int main()
{
    char str[255];
    gets_s(str);
    int length = strlen(str);//length为字符串总长度
    int max = 0;             //max为最大不重复子串的长度
    int i, j, k, l;
    for (i = 0; i < length; i++)//i为前下标
    {
        for (j = i + 1; j < length; j++)//j为后下标
            for (k = i; k < j; k++)//判断从i到j这段字符串中有没有重复元素
            {
                if (str[k] == str[j])
                {
                    l = j;
                    j = length;
                    k = j;
                }
            }
        if (l - i > max)
            max = l - i;

    }
    if (max == 0)//当max==0时证明整段字符串中没重复元素，此时max=length
            max = length;
    printf("%d\n", max);
}