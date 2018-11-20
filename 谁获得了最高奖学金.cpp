/*
 * @Author: littlecorgi 
 * @Date: 2018-04-12 20:54:32 
 * @Last Modified by:   littlecorgi 
 * @Last Modified time: 2018-04-12 20:54:32 
 */
/*#include"stdio.h"
#include"string.h"
struct student
{
    char name[10]; //名称
    int qm;        //期末成绩
    int y;        //评议成绩
    char gb[2];    //是否为干部
    char xb[2];    //是否为西部省份学生
    int lw;        //论文数目
} stu[3];
int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        int i, X, sum = 0, max = 0, I; //jxj奖学金 sum奖学金总数
        scanf("%d", &X);
        int jxj[X];
        char o[2] = "N";
        for (i = 0; i < X; i++)
            jxj[i] = 0;
        for (i = 0; i < X; i++)
            scanf("%s %d %d %s %s %d", stu[i].name, &stu[i].qm, &stu[i].py, stu[i].gb, stu[i].xb, &stu[i].lw);
        for (i = 0; i < X; i++)
        {
            if(stu[i].qm>80&&stu[i].lw>0)
                jxj[i] += 8000;
            if(stu[i].qm>85&&stu[i].py>80)
                jxj[i] += 4000;
            if(stu[i].qm>90)
                jxj[i] += 2000;
            if(stu[i].qm>85&&strcmp(stu[i].xb,o))
                jxj[i] += 1000;
            if(stu[i].py>80&&strcmp(stu[i].gb,o))
                jxj[i] += 850;
        }
        for (i = 0; i < X; i++)
            if(max<jxj[i])
            {
                max = jxj[i];
                I = i;
            }
        for (i = 0; i < X; i++)
            if(jxj[i]==max)
            {
                I = i;
                i = X;
            }
        for (i = 0; i < X; i++)
            sum += jxj[i];
        printf("%s\n", stu[I].name);
        printf("%d\n", jxj[I]);
        printf("%d", sum);
    }
}*/
#include"stdio.h" 
#include "string.h"
int main()
{
	int N, X, c, d, g, i, s, sum, ans;
	char a[100], e, f;
	char str[100];
	scanf("%d", &N);
	while(N--)
	{
		ans = 0;
		sum = 0;
		scanf("%d", &X);
		for(i=0;i<X;i++)
	    {
			s = 0;
			scanf("%s %d %d %c %c %d", a, &c, &d, &e, &f, &g);
			if(c>80&&g>=1)
				s += 8000;
			if(c>85&&d>80)
				s += 4000;
			if(c>90)
				s += 2000;
			if(c>85&&f=='Y')
				s += 1000;
			if(d>80&&e=='Y')
				s += 850;
			if(ans<s)
			{
				strcpy(str, a);
				ans = s;
			}
			sum += s;
		}
		printf("%s\n", str);
		printf("%d\n", ans);
		printf("%d\n", sum);
	}
}
