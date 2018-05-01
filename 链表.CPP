#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
#include"string.h"
int laoshi(void);
int guanliyuan(void);
int xuesheng(void);
struct student
{
	char num[9];   //学号
	char name[9];  //姓名
	char class1[5];//班级
	int yw;        //语文成绩
	int sx;        //数学成绩
	int yy;        //英语成绩
	struct student *next;
};
struct student *create()
{
	struct student *head, *p, *q;
	char num[9];      //学号
	char name[9]; //姓名
	char class1[5];       //班级
	int yw;       //语文成绩
	int sx;       //数学成绩
	int yy;       //英语成绩
	head = NULL;
	int i, n;
	printf("请输入学生人数：");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d位同学学号：", i);
		scanf("%s", num);
		printf("请输入第%d位同学姓名：", i);
		scanf("%s", name);
		printf("请输入第%d位同学班级：", i);
		scanf("%s", class1);
		printf("请输入第%d位同学语文成绩：", i);
		scanf("%d", &yw);
		printf("请输入第%d位同学数学成绩：", i);
		scanf("%d", &sx);
		printf("请输入第%d位同学英语成绩：", i);
		scanf("%d", &yy);
		p = (struct student *)malloc(sizeof(struct student));
		strcpy(p->num, num);
		strcpy(p->name, name);
		strcpy(p->class1, class1);
		p->yw = yw;
		p->sx = sx;
		p->yy = yy;
		p->next = NULL;
		if (head == NULL)
			head = p;
		else
			q->next = p;
		q = p;
	}
}
struct student *insert(struct student *head)
{
	struct student *p, *q;
	char num[9];      //学号
	char name[9]; //姓名
	char class1[5];       //班级
	int yw;       //语文成绩
	int sx;       //数学成绩
	int yy;       //英语成绩
	int i;
	printf("请输入第%d位同学学号：", i);
	scanf("%s", num);
	printf("请输入第%d位同学姓名：", i);
	scanf("%s", name);
	printf("请输入第%d位同学班级：", i);
	scanf("%s", class1);
	printf("请输入第%d位同学语文成绩：", i);
	scanf("%d", &yw);
	printf("请输入第%d位同学数学成绩：", i);
	scanf("%d", &sx);
	printf("请输入第%d位同学英语成绩：", i);
	scanf("%d", &yy);
	p = (struct student *)malloc(sizeof(struct student));
	strcpy(p->num, num);
	strcpy(p->name, name);
	strcpy(p->class1, class1);
	p->yw = yw;
	p->sx = sx;
	p->yy = yy;
	q->next = NULL;//找到之前的尾指针
	q->next = p;
	p->next = NULL;
}
struct student *find(struct student *head, char num[])
{
	struct student *p = head;
	while (p&&strcmp(num, p->num))
		p = p->next;
	return p;
}
int xiugai(struct student *head, char num[])
{
	struct student *p = (find(head, num));
	if(p)
    {
        printf("********修改学生信息********\n");
        int a;
        printf("┌──────────────────────────────────────────────┐\n");
        printf("├1.修改学号      2.修改姓名      3.修改班级    ┤\n");
        printf("├4.修改语文成绩  5.修改数学成绩  6.修改英语成绩┤\n");
        printf("└──────────────────────────────────────────────┘\n");
        printf("请输入您需要修改的内容:(1~6)");
        scanf("%d", &a);
        if(a==1)
        {
            int sum[9];
            printf("请输入同学学号：", i);
            scanf("%s", num);
            strcpy(p->num,num);
        }
        if(a==2)
        {
            char name[9];
            printf("请输入同学姓名：", i);
            scanf("%s", name);
            strcpy(p->name,name);
        }
        if(a==3)
        {
            char class1[5];
            printf("请输入第%d位同学班级：", i);
            scanf("%s", class1);
            strcpy(p->class1,class1);
        }
        if(a==4)
        {
            int yw;
            printf("请输入第%d位同学语文成绩：", i);
            scanf("%d", &wy);
            p->yw=yw;
        }
        if(a==5)
        {
            int sx;
            printf("请输入第%d位同学数学成绩：", i);
            scanf("%d", &sx);
            p->sx=sx;
        }
        if(a==6)
        {
            int yy;
            printf("请输入第%d位同学英语成绩：", i);
            scanf("%d", &yy);
            p->yy=yy;
        }
    }
	printf(" ");
	return 0;
}
void delete1(struct student *head, char num[])
{
    struct student *p = (find(head, num));
    struct student *q;
    q->next=p->next;
    free(p);
    printf("删除成功！！！\n");
}






int menu()//主菜单
{
	int a;
	printf("┌────────────┐\n");
	printf("├        1.管理员        ┤\n");
	printf("├        2.老师          ┤\n");
	printf("├        3.学生          ┤\n");
	printf("├        0.退出系统      ┤\n");
	printf("└────────────┘\n");
	printf("请输入您的信息:");
	scanf("%d", &a);
	if (a>3 || a<0)
		printf("请输入正确的序号(0~3):");
	scanf("%d", &a);
	if (a == 1)
		guanliyuan();
	if (a == 2)
		laoshi();
	if (a == 3)
		xuesheng();
	if (a == 0)
		printf("退出中请稍后···\n");
	Sleep(3000);
	exit(0);
	return 0;
}
int guanliyuan(void)//管理员选单
{
	struct student *head;
	int a;
	printf("┌──────────────────────────┐\n");
	printf("├1.添加学生信息    2.修改学生信息    3.删除学生信息  ┤\n");
	printf("├4.学生成绩排序    5.学生学号排序    6.查询学生信息  ┤\n");
	printf("├7.添加老师账号    8.修改老师密码    9.添加学生账号  ┤\n");
	printf("├10.修改学生密码   11.修改密码       12.新建学生信息 ┤\n");
	printf("├0.退出系统                                          ┤\n");
	printf("└──────────────────────────┘\n");
	printf("请输入您需要的功能:");
	scanf("%d", &a);
	if (a>6 || a<0)
		printf("请输入正确的序号(0~7\n");
	else
	{
		switch (a)
		{
		case 1:
			create();
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
		case 12:
			insert(head);
			break;

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
	struct student *head;
	printf("┌───────────────────────────────┐\n");
	printf("├1.添加本班学生信息    2.修改本班学生信息    3.删除本班学生信息┤\n");
	printf("├4.本班学生成绩排序    5.本班学生学号排序    6.查询本班学生信息┤\n");
	printf("├7.修改密码           0.退出系统                               ┤\n");
	printf("└───────────────────────────────┘\n");
	printf("请输入您需要的功能:");
	scanf("%d", &a);
	if (a>6 || a<0)
		printf("请输入正确的序号(0~7\n");
	else
	{
		switch (a)
		{
		case 1:
			insert(head);
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
	printf("┌───────┐\n");
	printf("├1.查看自己信息┤\n");
	printf("├2.查看成绩排名┤\n");
	printf("├3.修改自己密码┤\n");
	printf("├0.退出系统    ┤\n");
	printf("└───────┘\n");
	printf("请输入您需要的功能:");
	scanf("%d", &a);
	if (a>2 || a<0)
		printf("请输入正确的序号(0~2)\n");
	else
	{
		if (a == 1)
			printf("你的学号");
		if (a == 2)
			if (a == 3)
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
