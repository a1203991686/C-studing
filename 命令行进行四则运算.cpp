/*
 * @Author: littlecorgi 
 * @Date: 2018-04-13 19:15:34 
 * @Last Modified by: littlecorgi
 * @Last Modified time: 2018-04-13 19:23:34
 */
/*
 * 编写程序，从命令行输入两个整数的四则运算式，
 * 如 85 + 105，计算并输出结果。
 * 输入时注意：在两个整数和运算符之间留出空格。
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
        default:
            break;
    }
    printf("%d\n", result);
    return 0;
}