/*
 * @Author: littlecorgi 
 * @Date: 2018-04-13 19:15:34 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-13 19:23:34
 */
/*
 * ��д���򣬴�����������������������������ʽ��
 * �� 85 + 105�����㲢��������
 * ����ʱע�⣺�����������������֮�������ո�
 */
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char *ch = argv[2];
    int result;
    switch(*ch)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
    printf("%d\n", result);
    return 0;
}