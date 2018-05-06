#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
#include"string.h"
void teacher(struct student *head);
void administrator(struct student *head);
void student_1(struct student *head);
struct student *create();
void change(struct student *head, char num[9]);
void delete_1(struct student *head, char num[9]);
void ywsort(struct student *head);
void sxsort(struct student *head);
void yysort(struct student *head);
void scoresort(struct student *head);
void numsort(struct student *head);
void chaxun(struct student *head, char num[9]);
void insert(struct student *head);
void output(struct student *head);

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
		printf("请输入第%d位同学学号：", i + 1);
		scanf("%s", num);
		printf("请输入第%d位同学姓名：", i + 1);
		scanf("%s", name);
		printf("请输入第%d位同学班级：", i + 1);
		scanf("%s", class1);
		printf("请输入第%d位同学语文成绩：", i + 1);
		scanf("%d", &yw);
		printf("请输入第%d位同学数学成绩：", i + 1);
		scanf("%d", &sx);
		printf("请输入第%d位同学英语成绩：", i + 1);
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
	return head;
}

void output(struct student *head)
{
	struct student *p;
	printf("学号 姓名 班级 语文 数学 英语\n");
	for (p = head; p; p = p->next)
		printf("%s %s %s %d %d %d\n", p->num, p->name, p->class1, p->yw, p->sx, p->sx, p->yy);
	getchar();
}
void insert(struct student *head)
{
	struct student *p, *q;
	char num[9];	 //学号
	char name[9];	 //姓名
	char class1[5];  //班级
	int yw;			 //语文成绩
	int sx;			 //数学成绩
	int yy;			 //英语成绩
	printf("请输入同学学号：");
	scanf("%s", num);
	printf("请输入同学姓名：");
	scanf("%s", name);
	printf("请输入同学班级：");
	scanf("%s", class1);
	printf("请输入同学语文成绩：");
	scanf("%d", &yw);
	printf("请输入同学数学成绩：");
	scanf("%d", &sx);
	printf("请输入同学英语成绩：");
	scanf("%d", &yy);
	p = (struct student *)malloc(sizeof(struct student));
	q = (struct student *)malloc(sizeof(struct student));
	q->next = NULL;
	strcpy(p->num, num);
	strcpy(p->name, name);
	strcpy(p->class1, class1);
	p->yw = yw;
	p->sx = sx;
	p->yy = yy;
	q->next = p;
	p->next = NULL;
}

struct student *find(struct student *head, char num[9])
{
	struct student *p = head;
	while (p&&strcmp(num, p->num))
		p = p->next;
	return p;
}

void change(struct student *head, char num[9])
{
	struct student *p;
	p = (struct student *)malloc(sizeof(struct student));
	p = find(head, num);
	int a;
	printf("┌───────────────────────┐\n");
	printf("├        1.学号         ┤\n");
	printf("├        2.姓名         ┤\n");
	printf("├        3.班级         ┤\n");
	printf("├        4.语文成绩     ┤\n");
	printf("├        5.数学成绩     ┤\n");
	printf("├        6.英语成绩     ┤\n");
	printf("└───────────────────────┘\n");
	printf("请输入需要修改的内容:");
	scanf("%d", &a);
	if (a == 1)
	{
		char num[9];
		printf("请输入同学学号：");
		scanf("%s", num);
		strcpy(p->num, num);
	}
	if (a == 2)
	{
		char name[9];  //姓名
		printf("请输入同学姓名：");
		scanf("%s", name);
		strcpy(p->name, name);
	}
	if (a == 3)
	{
		char class1[5];//班级
		printf("请输入同学班级：");
		scanf("%s", class1);
		strcpy(p->class1, class1);
	}
	if (a == 4)
	{
		int yw;        //语文成绩
		printf("请输入同学语文成绩：");
		scanf("%d", &yw);
		p->yw = yw;
	}
	if (a == 5)
	{
		int sx;        //数学成绩
		printf("请输入同学数学成绩：");
		scanf("%d", &sx);
		p->sx = sx;
	}
	if (a == 6)
	{
		int yy;        //英语成绩
		printf("请输入同学英语成绩：");
		scanf("%d", &yy);
		p->yy = yy;
	}
}

void delete_1(struct student *head, char num[9])
{
	struct student *p, *q;
	p = (struct student *)malloc(sizeof(struct student));
	q = (struct student *)malloc(sizeof(struct student));
	p = find(head, num);
	q->next = p;
	q->next = p->next;
	free(p);
}

void ywsort(struct student *head)
{
	struct student *cur = NULL;
	struct student *teil = NULL;
	cur = head;
	while (cur != teil)
	{
		while (cur->next != teil)
		{
			if (cur->yw > cur->next->yw)
			{
				int tmp = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = tmp;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	for (cur = head; cur; cur = cur->next)
		printf("%d ", cur->yw);
}

void sxsort(struct student *head)
{
	struct student *cur = NULL;
	struct student *teil = NULL;
	cur = head;
	while (cur != teil)
	{
		while (cur->next != teil)
		{
			if (cur->sx > cur->next->sx)
			{
				int tmp = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = tmp;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	for (cur = head; cur; cur = cur->next)
		printf("%d ", cur->sx);
}

void yysort(struct student *head)
{
	struct student *cur = NULL;
	struct student *teil = NULL;
	cur = head;
	while (cur != teil)
	{
		while (cur->next != teil)
		{
			if (cur->yy > cur->next->yy)
			{
				int tmp = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = tmp;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	for (cur = head; cur; cur = cur->next)
		printf("%d ", cur->yy);
}

void numsort(struct student *head)
{
	struct student *cur = NULL;
	struct student *teil = NULL;
	cur = head;
	while (cur != teil)
	{
		while (cur->next != teil)
		{
			if (cur->yy > cur->next->yy)
			{
				char tmp[9];
				strcpy(tmp, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, tmp);
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	for (cur = head; cur; cur = cur->next)
		printf("%s ", cur->num);
}

void scoresort(struct student *head)
{
	int a;
	printf("********************\n");
	printf("        1.根据语文成绩排序\n");
	printf("        2.根据数学成绩排序\n");
	printf("        3.根据英语成绩排序\n");
	printf("        0.退出系统\n");
	printf("********************\n");
	printf("请输入您的信息:");
	scanf("%d", &a);
	if (a>3 || a<0)
		printf("请输入正确的序号(0~3):");
	scanf("%d", &a);
	if (a == 1)
		ywsort(head);
	if (a == 2)
		sxsort(head);
	if (a == 3)
		yysort(head);
	if (a == 0)
	{
		printf("退出中请稍后···\n");
		Sleep(3000);
		exit(0);
	}
}

void chaxun(struct student *head, char num[9])
{
	struct student *p;
	p = find(head, num);
	printf("学号 姓名 班级 语文 数学 英语\n");
	printf("%s %s %s %d %d %d\n", p->num, p->name, p->class1, p->yw, p->sx, p->sx, p->yy);
	getchar();
}

struct student *finput(int a)//文件录入 
{

	FILE *fp;
	struct student *pHead = NULL, *pEnd, *pNew;
	int sum = 0, i, j, num;
	char filename[100];
	if (a == 2)
	{
		printf("请输入文件路径及文件名：");
		fflush(stdin);
		gets(filename);
	}
	pEnd = pHead = (struct student *)malloc(sizeof(struct student));
	fp = fopen(filename, "rt+");
	if (fp == NULL)
	{
		printf("不能打开文件");
		exit(1);
	}
	while (1)
	{
		sum = 0;
		pNew = (struct student *)malloc(sizeof(struct student));
		fscanf(fp, "%s %s %s %d %d %d", pNew->num, pNew->name, pNew->class1, pNew->yw, pNew->sx, pNew->yy);
		pEnd->next = pNew;
		pEnd = pNew;
	}
	pEnd->next = NULL;
	fclose(fp);
	return pHead;
}


void menu(struct student *head)//主菜单
{
	int a;
	printf("********************\n");
	printf("        1.管理员\n");
	printf("        2.老师\n");
	printf("        3.学生\n");
	printf("        0.退出系统\n");
	printf("********************\n");
	printf("请输入您的信息:");
	scanf("%d", &a);
	if (a>3 || a<0)
		printf("请输入正确的序号(0~3):");
	if (a == 1)
	{
		administrator(head);
		system("cls");
	}
	if (a == 2)
	{
		teacher(head);
		system("cls");
	}
	if (a == 3)
	{
		student_1(head);
		system("cls");
	}
	if (a == 0)
	{
		printf("退出中请稍后···\n");
		Sleep(3000);
		exit(0);
	}
}

void administrator(struct student *head)//管理员选单
{
	int a;
	while (1)
	{
		system("cls");
		printf("********************\n");
		printf("\t1.新建学生信息    2.修改学生信息    3.删除学生信息\n");
		printf("\t4.添加学生信息    5.学生学号排序    6.学生成绩排序\n");
		printf("\t7.查询学生信息    8.修改老师密码    9.添加学生账号\n");
		printf("\t10.修改学生密码   11.修改密码       12.新建学生信息 13.输出全部学生信息 \n");
		printf("\t0.退出系统\n");
		printf("********************\n");
		printf("请输入您需要的功能:");
		scanf("%d", &a);
		if (a > 13 || a < 0)
			printf("请输入正确的序号(0~13\n");
		else
		{
			switch (a)
			{
			case 1:
			{
				system("cls");
				head=create();
			}
			break;
			case 2:
			{
				getchar();
				system("cls");
				char num[9];
				scanf("%s", num);
				change(head, num);
			}
			break;
			case 3:
			{
				getchar();
				system("cls");
				char num[9];
				scanf("%s", num);
				delete_1(head, num);
			}
			break;
			case 4:
			{
				system("cls");
				insert(head);
			}
			break;
			case 5:
			{
				system("cls");
				numsort(head);
			}
			break;
			case 6:
			{
				system("cls");
				scoresort(head);
				
			}
			break;
			case 7:
			{
				system("cls");
				char num[9];
				printf("请输入学生学号");
				scanf("%s", num);
				getchar();
				chaxun(head, num);
			}
			break;
			case 8:
			case 9:
			case 10:
			case 11:
			{
				system("cls");
				printf("功能正在完善中\n");
				printf("即将返回上一级```\n");
				Sleep(3000);
				administrator(head);
			}
			break;
			case 12:
			{
				system("cls");
				insert(head);
			}
			break;
			case 13:
			{
				system("cls");
				output(head);
				getchar();
			}
			break;
			case 0:
			{
				system("cls");
				printf("返回中请稍后···\n");
				Sleep(3000);
			}
			break;
			}
		}
	}
}

void teacher(struct student *head)//老师选单
{
	int a;
	while (1)
	{
		system("cls");
		printf("********************\n");
		printf("\t1.添加本班学生信息    2.修改本班学生信息    3.删除本班学生信息\n");
		printf("\t4.本班学生成绩排序    5.本班学生学号排序    6.查询本班学生信息\n");
		printf("\t7.修改密码           0.退出系统\n");
		printf("********************\n");
		printf("请输入您需要的功能:");
		scanf("%d", &a);
		if (a > 6 || a < 0)
			printf("请输入正确的序号(0~7\n");
		else
		{
			switch (a)
			{
			case 1:
			{
				system("cls");
				insert(head);
			}
				break;
			case 2:
			{
				system("cls");
				char num[9];
				scanf("%s", num);
				change(head, num);
			}
			break;
			case 3:
			{
				system("cls");
				char num[9];
				scanf("%s", num);
				delete_1(head, num);
			}
			break;
			case 4:
			{
				system("cls");
				scoresort(head);
			}
				break;
			case 5:
			{
				system("cls");
				numsort(head);
			}
				break;
			case 6:
			{
				system("cls");
				char num[9];
				scanf("%s", num);
				chaxun(head, num);
			}
			break;
			case 7:
			{
				system("cls");
				printf("功能正在完善中\n");
				printf("即将返回上一级```\n");
				Sleep(3000);
				teacher(head);
			}
			// changeteacher();
			break;
			case 0:
			{
				system("cls");
				printf("返回中请稍后···\n");
				Sleep(3000);
			}
			break;
			}
		}
		exit(0);
	}
}

void student_1(struct student *head)//学生选单
{
	system("cls");
	int a;
	char num[9];
	printf("请输入你的学号：");
	scanf("%s", num);
	while (1)
	{
		printf("********************\n");
		printf("\t1.查看自己信息\n");
		printf("\t2.查看成绩排名\n");
		printf("\t3.修改自己密码\n");
		printf("\t4.返回上一级\n");
		printf("\t0.退出系统 \n");
		printf("********************\n");
		printf("请输入您需要的功能:");
		scanf("%d", &a);
		if (a > 4 || a < 0)
			printf("请输入正确的序号(0~4)\n");
		switch(a)
		{
		case 1:
			{
				system("cls");
				chaxun(head, num);
			}
			break;
		case 2:
			{
				system("cls");
				printf("adsfsad\n");
				Sleep(2000);
			}
			break;
		case 3:
			{
				system("cls");
				printf("功能正在完善中\n");
				printf("即将返回上一级```\n");
				Sleep(2000);
				student_1(head);
			}
			break;
		case 4:
			{
				system("cls");
				menu(head);
			}
			break;
			// changestudent_1();
		}
	}
}

int main()
{
	struct student *head = NULL;
	menu(head);
}