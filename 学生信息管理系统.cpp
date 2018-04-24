#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
int laoshi(void);
int guanliyuan(void);
int xuesheng(void);
struct student
{
    int num;      //学号
    char xm[255]; //姓名
    int bj;       //班级
    int wy;       //语文成绩
    int sx;       //数学成绩
    int yy;       //英语成绩
} stu[100];
int menu()//主菜单
{
    int a;
    printf("┌───────────────────────┐\n");
    printf("├        1.管理员        ┤\n");
    printf("├        2.老师          ┤\n");
    printf("├        3.学生          ┤\n");
    printf("├        0.退出系统      ┤\n");        
    printf("└───────────────────────┘\n");
    printf("请输入您的信息:");
    scanf("%d", &a);
    if(a>3||a<0)
        printf("请输入正确的序号(0~3):");
    scanf("%d", &a);        
    if (a == 1)
        guanliyuan();
    if(a==2)
        laoshi();
    if(a==3)
        xuesheng();
    if(a==0)
        printf("退出中请稍后···\n");
    Sleep(3000);
    exit(0);
    return 0;
}
int guanliyuan(void)//管理员选单
{
    int a;
    printf("┌───────────────────────────────────────────────┐\n");
    printf("├1.添加学生信息    2.修改学生信息    3.删除学生信息┤\n");
    printf("├4.学生成绩排序    5.学生学号排序    6.查询学生信息┤\n");
    printf("├7.添加老师账号    8.修改老师密码    9.添加学生账号┤\n");
    printf("├10.修改学生密码   11.修改密码       0.退出系统   ┤\n");         
    printf("└───────────────────────────────────────────────┘\n"); 
    printf("请输入您需要的功能:");
    scanf("%d", &a);    
    if(a>6||a<0)
        printf("请输入正确的序号(0~7\n");
    else
    {
        switch(a)
        {
            case 1:
                tianjia();
                break;
            case 2:
                xiugai();
                break;
            case 3:
                shanchu();
                break;
            case 4:
                chengjipaixu();
                break;
            case 5:
                xuehaopaixu();
                break;
            case 6:
                chaxun();
                break;
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                {
                    printf("功能正在完善中\n");
                    printf("即将返回上一级```\n");
                    Sleep(3000);
                    guanliyuan();
                }

            /*case 7:
                tianjialaoshi();
                break;
            case 8:
                xiugailaoshi();
                break;
            case 9:
                tianjiaxuesheng();
                break;
            case 10:
                xiugaixuesheng();
                break;
            case 11:
                xiugaimima();
                break;*/
            case 0:
            {
                printf("退出中请稍后···\n");
                Sleep(3000);
            }
                break;
        }
    }
    exit(0);
    return 0;
}
int laoshi(void)//老师选单
{
    int a;
    printf("┌──────────────────────────────────────────────────────────┐\n");
    printf("├1.添加本班学生信息    2.修改本班学生信息    3.删除本班学生信息┤\n");
    printf("├4.本班学生成绩排序    5.本班学生学号排序    6.查询本班学生信息┤\n");
    printf("├7.修改密码           0.退出系统                            ┤\n");    
    printf("└──────────────────────────────────────────────────────────┘\n");
    printf("请输入您需要的功能:");
    scanf("%d", &a);    
    if(a>6||a<0)
        printf("请输入正确的序号(0~7\n");
    else
    {
        switch(a)
        {
            case 1:
                tianjia();
                break;
            case 2:
                xiugai();
                break;
            case 3:
                shanchu();
                break;
            case 4:
                chengjipaixu();
                break;
            case 5:
                xuehaopaixu();
                break;
            case 6:
                chaxun();
                break;
            case 7:
                {
                    printf("功能正在完善中\n");
                    printf("即将返回上一级```\n");
                    Sleep(3000);
                    laoshi();
                }
                // xiugailaoshi();
                break;
            case 0:
            {
                printf("退出中请稍后···\n");
                Sleep(3000);
            }
                break;
        }
    }
    exit(0);
    return 0;
}
int xuesheng(void)//学生选单
{
    int a;
    printf("┌─────────────┐\n");
    printf("├1.查看自己信息┤\n");
    printf("├2.查看成绩排名┤\n");
    printf("├3.修改自己密码┤\n");
    printf("├0.退出系统    ┤\n");    
    printf("└─────────────┘\n");
    printf("请输入您需要的功能:");
    scanf("%d", &a);    
    if(a>2||a<0)
        printf("请输入正确的序号(0~2)\n");
    else
    {
        if(a==1)
            printf("你的学号");
        if(a==2)
        if(a==3)
        {
            printf("功能正在完善中\n");
            printf("即将返回上一级```\n");
            Sleep(3000);
            xuesheng();
        }
            // xiugaixuesheng();
    }
    return 0;
}
int main()
{
    menu();
}