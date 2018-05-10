/*#include"stdio.h"
#include <iostream>
#include <math.h> 
#include <string.h>
int main(int argc, char** argv) 
{
    float a, b, d;
    char e[10];
    float E = 2.71828;
    d = 180.0 / 3.1415926;
    printf("请输入范围：\n");
    scanf("%f%f", &a, &b);
    printf("请输入三角函数的类型：\n");
    scanf("%s", e);
    if ( strcmp(e, "cos") == 0 )
        printf("该积分的值为：%.3f", sin(a * d) - sin(b * d));
	if ( strcmp(e, "sin") == 0 )
        printf("该积分的值为：%.3f", cos(b * d) - cos(a * d));
    if ( strcmp(e, "ex") == 0 )
    {
		while ( a > 0 )
        {
            E = E * E;
            a--;
		}
		while ( b < 0 )
        {
			if ( b < -1 )
            {
                E = E * E;
                b++;
                ;
			}
			if ( b == -1 )
            {
                E = 1.0 / E;
            }
		}
        printf("该积分的值为：%.3f", E);
    }
    return 0;
}*/
#include <stdio.h>
#include <math.h>
double f1(double x);
double f2(double x);
double f3(double x);
double integrel(double (*f)(double ),double a,double b);
int main()
{
    double s1, s2, s3;
    double (*f[3])(double) = {f1, f2, f3};
    s1 = integrel(f[0], 0, 1);
    s2 = integrel(f[1], -1, 1);
    s3 = integrel(f[2], 0, 2);
    printf("sin(x)在区间[ 0,1]上的积分为s1=%lf\n", s1);
    printf("cos(x)在区间[-1,1]上的积分为s2=%lf\n", s2);
    printf("exp(x)在区间[ 0,2]上的积分为s3=%lf\n", s3);
    return 0;
}
double integrel(double (*f)(double ),double a,double b)
{
	double s,h;
	int i,n=100;h=(b-a)/n;
	s=0;
	for(i=1;i<n;i++)
	{
		s+=f(a+i*h)*h;
	}
	return s;
}
double f1(double x)
{
    return sin(x);
}
double f2(double x)
{
    return cos(x);
}
double f3(double x)
{
    return exp(x);
}

