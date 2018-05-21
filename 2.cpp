#include"stdio.h"
int main()
{
    int a1, b1, c1, a2, b2, c2, a3 = 0, b3 = 0, c3 = 0, a4 = 0, b4 = 0, c4 = 0, a5 = 0, b5 = 0, c5 = 0;
    //a3b3c3为相加结果
    //a4b4c4为相减结果
    //a5b5c5为相加/2结果
    scanf("%d:%d:%d", &a1, &b1, &c1);
    scanf("%d:%d:%d", &a2, &b2, &c2);
    //相加
    if (c1 + c2 >= 60)
    {
        c3 += c1 + c2 - 60;
        b3++;
    }
    else
        c3 += c1 + c2;
    if (b1 + b2 + b3 >= 60)
    {
        b3 += b1 + b2 - 60;
        a3++;
    }
    else
    {
        b3 += b1 + b2;
    }
    a3 += a1 + a2;
    if(a3>24)
        a3 = a3 % 24;
    
    printf("%02d:%02d:%02d\n", a3, b3, c3);
    //相减
    if(c1-c2<0)
    {
        b1--;
        c4 += c1 + 60 - c2;
    }
    else
    {
        c4 += c1 - c2;
    }
    if(b1-b2<0)
    {
        a1--;
        b4 += b1 + 60 - b2;
    }
    else
    {
        b4 += b1 - b2;
    }
    a4 += a1 - a2;
    if(a4<0)
        a4 = 24 + a4;
    printf("%02d:%02d:%02d\n", a4, b4, c4);
    //相加/2
    int x1;
    double x2;
    x1 = a3 * 3600 + b3 * 60 + c3;
    x2 = x1 / 2;
    a5 = x2 / 3600;
    b5 = (x2 - a5 * 3600) / 60;
    c5 = x2 - a5 * 3600 - b5 * 60;
    if(x1%2==0)
    {
        printf("%02d:%02d:%02d\n", a5, b5, c5);
    }
    else
    {
        printf("%02d:%02d:%02d'50\n", a5, b5, c5);
    }
    return 0;
}