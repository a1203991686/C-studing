#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
#include"string.h"
void teacher(struct student *head);//老师端打印项目
void administrator(struct student *head);//管理员端打印项目
void student_1(struct student *head);//学生端打印项目
void logininf(struct student *head);//登录信息修改打印项目
struct student *create();//创建信息链表
struct student *inf_1();//从文件读入信息到链表
struct student *find(struct student *head, char num[9]);//查找
void change_1(struct student *head, char num[9]);//修改
void delete_1(struct student *head, char num[9]);//删除
void ywsort(struct student *head);//语文排序
void sxsort(struct student *head);//数学排序
void yysort(struct student *head);//英语排序
void sort_1(struct student *head);//排序界面打印
void numsort(struct student *head);//学号排序
void chaxun(struct student *head, char num[9]);//查询信息
void insert(struct student *head);//增加信息
void save_1(struct student *head);//保存到文件
void output();//打印所有项目

void save_2(struct login_a *head_a);//管理员登陆文件保存
void change_l_a(struct login_a *head_a, char username[20]);//修改管理员密码
void delete_1(struct login_a *head_a, char username[20]);//删除账户
void insert_l_a(struct login_a *head_a);//增加管理员登录链表节点
struct login_a *inf_l_a();//管理员密码文件信息录入链表
struct login_a *find_l(struct login_a *head_a, char username[20]);//查询管理员登陆账号
struct login_a *create_a();//创建管理员登陆链表

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

struct login_a //管理员账号密码
{
	char username[20];
	char password[20];
	char identity;
	struct login_a *next;
};

struct student *create()
{
	struct student *head, *p, *q;
	char num[9];    //学号
	char name[9];   //姓名
	char class1[5]; //班级
	int yw;			//语文成绩
	int sx;			//数学成绩
	int yy;			//英语成绩
	head = NULL;
	int i, n;
	printf("请输入学生人数：");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		getchar();
		printf("请输入第%d位同学学号：", i + 1);
		scanf("%s", num);
		int a = strlen(num);
		while (a != 8)
		{
			printf("学号输入错误，请输入8为学号:");
			scanf("%s", num);
			a = strlen(num);
		}
		//getchar();
		printf("请输入第%d位同学姓名：", i + 1);
		scanf("%s", name);
		//getchar();
		printf("请输入第%d位同学班级：", i + 1);
		scanf("%s", class1);
		a = strlen(class1);
		while (a != 4)
		{
			printf("班级输入错误，请输入正确的班级:");
			scanf("%s", class1);
			a = strlen(class1);
		}
		//getchar();
		printf("请输入第%d位同学语文成绩：", i + 1);
		scanf("%d", &yw);
		while (yw > 100 || yw < 0)
		{
			printf("成绩输入错误，请重新输入:\n");
			scanf("%d", &yw);
		}
		printf("请输入第%d位同学数学成绩：", i + 1);
		scanf("%d", &sx);
		while (sx > 100 || sx < 0)
		{
			printf("成绩输入错误，请重新输入:\n");
			scanf("%d", &sx);
		}
		printf("请输入第%d位同学英语成绩：", i + 1);
		scanf("%d", &yy);
		while (yy > 100 || yy < 0)
		{
			printf("成绩输入错误，请重新输入:\n");
			scanf("%d", &yy);
		}
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

void save_1(struct student *head)
{
	struct student *stu, *p;
	FILE *fp;
	printf("请输入文件路径及文件名：");
	fp = fopen("d:/1.txt", "wt+");
	/*
	if (fp == NULL)
	{
	printf("对不起，文件打开错误，请重新输入文件位置\n");
	Sleep(2000);
	save_1(head);
	}
	stu = head->next;
	*/
	stu = p = head;
	while (stu)
	{
		p = stu->next;
		if (!p)
		{
			fprintf(fp, "%s\t%s\t%s\t%d\t%d\t%d", stu->num, stu->name, stu->class1, stu->yw, stu->sx, stu->yy);
			break;
		}
		fprintf(fp, "%s\t%s\t%s\t%d\t%d\t%d\n", stu->num, stu->name, stu->class1, stu->yw, stu->sx, stu->yy);
		stu = stu->next;
	}
	/*
	for (stu = head->next; stu != NULL; stu = stu->next)
	fprintf(fp, "%s\t%s\t%s\t%d\t%d\t%d\n", stu->num, stu->name, stu->class1, stu->yw, stu->sx, stu->yy);
	*/
	printf("文件写入成功,请按任意键\n");
	getchar();
	fclose(fp);
}

struct student *inf_1()
{
	struct student *head, *r, *stu;
	head = (struct student *)malloc(sizeof(struct student));
	FILE *fp;
	printf("***********文件读入*************\n");
	fp = fopen("d:/1.txt", "rt");
	/*
	head = (struct student *)malloc(sizeof(struct student));
	head->next = NULL;
	*/
	r = head;
	while (!feof(fp))
	{
		stu = (struct student *)malloc(sizeof(struct student));
		fscanf(fp, "%s %s %s %d %d %d", stu->num, stu->name, stu->class1, &stu->yw, &stu->sx, &stu->yy);
		r->next = stu;
		r = stu;
	}
	r->next = NULL;
	fclose(fp);
	printf("文件读取成功！！\n");
	printf("正在跳转，请稍后……\n");
	Sleep(1000);
	system("cls");
	head = head->next;
	return head;
}

void output()
{
	struct student *p, *head, *stu;
	head = inf_1();
	printf("学号\t姓名\t班级\t语文\t数学\t英语\n");
	p = stu = head;
	while (p)
	{
		/*stu = p->next;
		if(!stu)
		break;*/
		printf("%s\t%s\t%s\t%d\t%d\t%d\n", p->num, p->name, p->class1, p->yw, p->sx, p->yy);
		p = p->next;
	}
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
	int a = strlen(num);
	while (a != 8)
	{
		printf("学号输入错误，请输入8位学号:");
		scanf("%s", num);
		a = strlen(num);
	}
	printf("请输入同学姓名：");
	scanf("%s", name);
	printf("请输入同学班级：");
	scanf("%s", class1);
	a = strlen(class1);
	while (a != 4)
	{
		printf("班级输入错误，请输入正确的班级:");
		scanf("%s", class1);
		a = strlen(class1);
	}
	printf("请输入同学语文成绩：");
	scanf("%d", &yw);
	while (yw > 100 || yw < 0)
	{
		printf("成绩输入错误，请重新输入:\n");
		scanf("%d", &yw);
	}
	printf("请输入同学数学成绩：");
	scanf("%d", &sx);
	while (sx > 100 || sx < 0)
	{
		printf("成绩输入错误，请重新输入:\n");
		scanf("%d", &sx);
	}
	printf("请输入同学英语成绩：");
	scanf("%d", &yy);
	while (yy > 100 || yy < 0)
	{
		printf("成绩输入错误，请重新输入:\n");
		scanf("%d", &yy);
	}
	p = (struct student *)malloc(sizeof(struct student));
	q = (struct student *)malloc(sizeof(struct student));
	q = head->next;
	strcpy(p->num, num);
	strcpy(p->name, name);
	strcpy(p->class1, class1);
	p->yw = yw;
	p->sx = sx;
	p->yy = yy;
	head->next = p;
	p->next = q;
}

struct student *find(struct student *head, char num[9])
{
	struct student *p, *q;
	q = (struct student *)malloc(sizeof(struct student));
	int i = 0;
	for (p = head; p != NULL; p = p->next)
		if (!strcmp(num, p->num))
		{
			i = 1;
			break;
		}
	/*
	while (p&&strcmp(num, p->num))
	p = p->next;
	if (!strcmp(num, p->num))
	i++;
	*/
	if (i == 0)
	{
		printf("查询不到结果，请重新输入:");
		char num_1[9];
		getchar();
		scanf("%s", num_1);
		find(head, num_1);
	}
	return p;
}

void change_1(struct student *head, char num[9])
{
	struct student *p;
	p = (struct student *)malloc(sizeof(struct student));
	p = find(head, num);
	char a;
	printf("┌───────────────────────┐\n");
	printf("├        1.学号         ┤\n");
	printf("├        2.姓名         ┤\n");
	printf("├        3.班级         ┤\n");
	printf("├        4.语文成绩     ┤\n");
	printf("├        5.数学成绩     ┤\n");
	printf("├        6.英语成绩     ┤\n");
	printf("└───────────────────────┘\n");
	printf("请输入需要修改的内容:");
	scanf("%c", &a);
	while (a > '6' || a < '1')
	{
		printf("请输入正确的序号(1~6)!!!\n");
		printf("请重新输入\n");
		scanf("%c", &a);
	}
	if (a == '1')
	{
		char num[9];
		printf("请输入同学学号：");
		scanf("%s", num);
		int x = strlen(num);
		while (x != 8)
		{
			printf("学号输入错误，请输入8位学号:");
			scanf("%s", num);
			x = strlen(num);
		}
		strcpy(p->num, num);
	}
	if (a == '2')
	{
		char name[9];  //姓名
		printf("请输入同学姓名：");
		scanf("%s", name);
		strcpy(p->name, name);
	}
	if (a == '3')
	{
		char class1[5];//班级
		printf("请输入同学班级：");
		scanf("%s", class1);
		int x = strlen(class1);
		while (x != 8)
		{
			printf("学号输入错误，请输入8位学号:");
			scanf("%s", class1);
			x = strlen(class1);
		}
		strcpy(p->class1, class1);
	}
	if (a == '4')
	{
		int yw;        //语文成绩
		printf("请输入同学语文成绩：");
		scanf("%d", &yw);
		while (yw > 100 || yw < 0)
		{
			printf("成绩输入错误，请重新输入:\n");
			scanf("%d", &yw);
		}
		p->yw = yw;
	}
	if (a == '5')
	{
		int sx;        //数学成绩
		printf("请输入同学数学成绩：");
		scanf("%d", &sx);
		while (sx > 100 || sx < 0)
		{
			printf("成绩输入错误，请重新输入:\n");
			scanf("%d", &sx);
		}
		p->sx = sx;
	}
	if (a == '6')
	{
		int yy;        //英语成绩
		printf("请输入同学英语成绩：");
		scanf("%d", &yy);
		while (yy > 100 || yy < 0)
		{
			printf("成绩输入错误，请重新输入:\n");
			scanf("%d", &yy);
		}
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

void change_2(struct student *head)
{

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
			if (cur->yw < cur->next->yw)
			{
				//交换学号
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//交换姓名
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//交换班级
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//交换语文成绩
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//交换数学成绩
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//交换英语成绩
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("学号\t姓名\t班级\t语文\t数学\t英语\n");
	for (cur = head; cur; cur = cur->next)
		printf("%s\t%s\t%s\t%d\t%d\t%d\n", cur->num, cur->name, cur->class1, cur->yw, cur->sx, cur->yy);
	getchar();
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
			if (cur->sx < cur->next->sx)
			{
				//交换学号
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//交换姓名
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//交换班级
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//交换语文成绩
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//交换数学成绩
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//交换英语成绩
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("学号\t姓名\t班级\t语文\t数学\t英语\n");
	for (cur = head; cur; cur = cur->next)
		printf("%s\t%s\t%s\t%d\t%d\t%d\n", cur->num, cur->name, cur->class1, cur->yw, cur->sx, cur->yy);
	getchar();
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
			if (cur->yy < cur->next->yy)
			{
				//交换学号
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//交换姓名
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//交换班级
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//交换语文成绩
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//交换数学成绩
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//交换英语成绩
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("学号\t姓名\t班级\t语文\t数学\t英语\n");
	for (cur = head; cur; cur = cur->next)
		printf("%s\t%s\t%s\t%d\t%d\t%d\n", cur->num, cur->name, cur->class1, cur->yw, cur->sx, cur->yy);
	getchar();
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
			if (strcmp(cur->num, cur->next->num)<0)
			{
				//交换学号
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//交换姓名
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//交换班级
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//交换语文成绩
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//交换数学成绩
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//交换英语成绩
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("学号\t姓名\t班级\t语文\t数学\t英语\n");
	for (cur = head; cur; cur = cur->next)
		printf("%s\t%s\t%s\t%d\t%d\t%d\n", cur->num, cur->name, cur->class1, cur->yw, cur->sx, cur->yy);
	getchar();
}

void sort_1(struct student *head)
{
	while (1)
	{
		system("cls");
		char a;
		printf("********************\n");
		printf("        1.根据语文成绩排序\n");
		printf("        2.根据数学成绩排序\n");
		printf("        3.根据英语成绩排序\n");
		printf("        3.根据学号排序\n");
		printf("        0.返回上一级\n");
		printf("********************\n");
		printf("请输入您的信息:");
		scanf("%c", &a);
		while (a > '3' || a < '0')
		{
			printf("请输入正确的序号(0~3)!!!\n");
			printf("请重新输入\n");
			scanf("%c", &a);
		}
		switch (a)
		{
		case '1':
			ywsort(head);
			break;
		case '2':
			sxsort(head);
			break;
		case '3':
			yysort(head);
			break;
		case '4':
			numsort(head);
			break;
		case '0':
		{
			printf("返回中请稍后···\n");
			Sleep(1000);
			administrator(head);
		}
		break;
		}
	}
}

void chaxun(struct student *head, char num[9])
{
	struct student *p;
	p = find(head, num);
	printf("学号\t姓名\t班级\t语文\t数学\t英语\n");
	printf("%s\t%s\t%s\t%d\t%d\t%d\n", p->num, p->name, p->class1, p->yw, p->sx, p->yy);
	getchar();
}

void menu(struct student *head)//主菜单
{
	char a;
	printf("********************\n");
	printf("        1.管理员\n");
	printf("        2.老师\n");
	printf("        3.学生\n");
	printf("        0.退出系统\n");
	printf("********************\n");
	printf("请输入您的信息:");
	scanf("%c", &a);
	while (a > '3' || a < '0')
	{
		printf("请输入正确的序号(0~3)!!!\n");
		printf("请重新输入\n");
		scanf("%c", &a);
	}
	if (a == '1')
	{
		struct login_a *head_a;
		head_a=inf_l_a();
		login_1(head_a);
		administrator(head);
		system("cls");
	}
	if (a == '2')
	{
		teacher(head);
		system("cls");
	}
	if (a == '3')
	{
		student_1(head);
		system("cls");
	}
	if (a == '0')
	{
		printf("退出中请稍后···\n");
		exit(0);
	}
}

void login_1(struct login_a *head_a)
{
	printf("请输入账号:\n");
	char username[20];
	scanf("%s", username);
	printf("请输入密码:\n");
	char password[20];
	scanf("%s", password);
	struct login_a *p;
	p = find_l(head_a, username);
	int i = 0;
	while (strcmp(p->password, password))
	{
		printf("密码输入错误，你还有%d次机会，请重新输入\n", 3 - i);
		scanf("%s", password);
		i++;
		if (i == 2)
		{
			printf("密码3次错误输入，程序退出!!!\n");
			Sleep(1000);
			exit(0);
		}
	}
}

void logininf(struct student *head,struct login_a *head_a)
{
	char a;
	while (1)
	{
		printf("\t1.添加老师账号\t2.修改老师密码\n");
		printf("\t3.添加学生信息\t4.修改学生密码\n");
		printf("\t5.修改自己密码\t0.返回上一级\n");
		scanf("%c", &a);
		while (a > '5' || a < '0')
		{
			printf("请输入正确的序号(0~5)!!!\n");
			printf("请重新输入\n");
			scanf("%c", &a);
		}
		switch (a)
		{
		case '1':
			printf("功能正在升级");
			Sleep(1000);
			logininf(head,head_a);
			break;
		case '2':
			printf("功能正在升级");
			Sleep(1000);
			logininf(head, head_a);
			break;
		case '3':
			printf("功能正在升级");
			Sleep(1000);
			logininf(head, head_a);
			break;
		case '4':
			printf("功能正在升级");
			Sleep(1000);
			logininf(head, head_a);
			break;
		case '5':
			char username[20];
			scanf("%s", username);
			change_l_a(head_a,username);
			break;
		case '0':
			printf("正在返回上一级，请稍等……\n");
			Sleep(1000);
			administrator(head, head_a);
			break;
		}
	}
	

}

void administrator(struct student *head, struct login_a *head_a)//管理员选单
{
	char a;
	while (1)
	{
		getchar();
		system("cls");
		printf("********************\n");
		printf("\t1.新建学生信息	2.修改学生信息    3.删除学生信息\n");
		printf("\t4.添加学生信息	5.学生信息排序    6.查询学生信息\n");
		printf("\t7.打印学生信息	8.保存到文件      9.登陆信息管理\n");
		printf("\t0.退出系统\n");
		printf("********************\n");
		printf("请输入您需要的功能:");
		scanf("%c", &a);
		while (a > '9' || a < '0')
			// while (strcmp(a,"15") > 0 || strcmp(a,"0")<0)
		{
			printf("请输入正确的序号(0~15)!!!\n");
			printf("请重新输入\n");
			scanf("%c", &a);
		}
		switch (a)
		{
		case '1':
		{
			system("cls");
			head = create();
		}
		break;
		case '2':
		{
			getchar();
			system("cls");
			char num[9];
			scanf("%s", num);
			int x = strlen(num);
			while (x != 8)
			{
				printf("学号输入错误，请输入8位学号:");
				scanf("%s", num);
				x = strlen(num);
			}
			change_1(head, num);
		}
		break;
		case '3':
		{
			getchar();
			system("cls");
			char num[9];
			scanf("%s", num);
			int x = strlen(num);
			while (x != 8)
			{
				printf("学号输入错误，请输入8位学号:");
				scanf("%s", num);
				x = strlen(num);
			}
			delete_1(head, num);
		}
		break;
		case '4':
		{
			system("cls");
			insert(head);
		}
		break;
		case '5':
		{
			system("cls");
			sort_1(head);
		}
		break;
		case '6':
		{
			system("cls");
			char num[9];
			printf("请输入学生学号:");
			scanf("%s", num);
			getchar();
			int x = strlen(num);
			while (x != 8)
			{
				printf("学号输入错误，请输入8位学号:");
				scanf("%s", num);
				x = strlen(num);
			}
			chaxun(head, num);
		}
		break;
		case '7':
		{
			system("cls");
			output();
		}
		break;
		case '8':
			save_1(head);
			break;
		case '9':
		{
			logininf(head, head_a);
		}
		break;
		case '0':
		{
			printf("退出中请稍后···\n");
			Sleep(1000);
			exit(0);
		}
		break;
		}
	}
}

void teacher(struct student *head)//老师选单
{
	char a;
	while (1)
	{
		system("cls");
		printf("********************\n");
		printf("\t1.添加本班学生信息    2.修改本班学生信息    3.删除本班学生信息\n");
		printf("\t4.本班学生成绩排序    5.本班学生学号排序    6.查询本班学生信息\n");
		printf("\t7.修改密码                                  0.返回上一级\n");
		printf("********************\n");
		printf("请输入您需要的功能:");
		scanf("%c", &a);
		while (a > '7' || a < '0')
		{
			printf("请输入正确的序号(0~7)!!!\n");
			printf("请重新输入\n");
			scanf("%c", &a);
		}
		switch (a)
		{
		case '1':
		{
			system("cls");
			insert(head);
		}
		break;
		case '2':
		{
			system("cls");
			char num[9];
			scanf("%s", num);
			int x = strlen(num);
			while (x != 8)
			{
				printf("学号输入错误，请重新输入8位学号:");
				scanf("%s", num);
				x = strlen(num);
			}
			change_1(head, num);
		}
		break;
		case '3':
		{
			system("cls");
			char num[9];
			scanf("%s", num);
			int x = strlen(num);
			while (x != 8)
			{
				printf("学号输入错误，请重新输入8位学号:");
				scanf("%s", num);
				x = strlen(num);
			}
			delete_1(head, num);
		}
		break;
		case '4':
		{
			system("cls");
			sort_1(head);
		}
		break;
		case '5':
		{
			system("cls");
			numsort(head);
		}
		break;
		case '6':
		{
			system("cls");
			char num[9];
			scanf("%s", num);
			int x = strlen(num);
			while (x != 8)
			{
				printf("学号输入错误，请重新输入8位学号:");
				scanf("%s", num);
				x = strlen(num);
			}
			chaxun(head, num);
			getchar();
		}
		break;
		case '7':
		{
			system("cls");
			printf("功能正在完善中\n");
			printf("即将返回上一级```\n");
			Sleep(3000);
			teacher(head);
		}
		break;
		case '0':
		{
			system("cls");
			printf("返回中请稍后···\n");
			Sleep(1000);
			exit(0);
		}
		break;
		}
	}
}

void student_1(struct student *head)//学生选单
{
	system("cls");
	char a;
	char num[9];
	printf("请输入你的学号：");
	scanf("%s", num);
	int x = strlen(num);
	while (x != 8)
	{
		printf("学号输入错误，请重新输入8位学号:");
		scanf("%s", num);
		x = strlen(num);
	}
	while (1)
	{
		printf("********************\n");
		printf("\t1.查看自己信息\n");
		printf("\t2.查看成绩排名\n");
		printf("\t3.修改自己密码\n");
		printf("\t0.返回上一级\n");
		printf("********************\n");
		printf("请输入您需要的功能:");
		scanf("%c", &a);
		while (a > '3' || a < '0')
		{
			printf("请输入正确的序号(0~3)!!!\n");
			printf("请重新输入\n");
			scanf("%c", &a);
		}
		switch (a)
		{
		case '1':
		{
			system("cls");
			chaxun(head, num);
			getchar();
		}
		break;
		case '2':
		{
			system("cls");
			printf("adsfsad\n");
			Sleep(1000);
		}
		break;
		case '3':
		{
			system("cls");
			printf("功能正在完善中\n");
			printf("即将返回上一级```\n");
			Sleep(1000);
			student_1(head);
		}
		break;
		case '0':
		{
			system("cls");
			printf("返回中请稍后···\n");
			Sleep(1000);
			exit(0);
		}
		break;
		}
	}
}



struct login_a *create_a()//创建管理员登陆链表
{
	struct login_a *head_a, *p;
	char username[20];	//账号
	char password[20];  //密码
	head_a = NULL;
	getchar();
	printf("请输入用户名");
	gets_s(username);
	printf("请输入密码");
	gets_s(password);
	p = (struct login_a *)malloc(sizeof(struct login_a));
	strcpy(p->username, username);
	strcpy(p->password, password);
	p->next = NULL;
	head_a = p;
	return head_a;
}

void insert_l_a(struct login_a *head_a)//增加管理员登录链表节点
{
	struct login_a *p, *q;
	char username[20];
	char password[20];
	printf("请输入账号：");
	scanf("%s", username);
	int a = strlen(username);
	while (a > 20 || a < 1)
	{
		printf("账号格式错误，请重新输入:");
		scanf("%s", username);
		a = strlen(username);
	}
	printf("请输入密码：");
	scanf("%s", password);
	a = strlen(password);
	while (a > 20 || a < 1)
	{
		printf("密码格式错误，请重新输入:");
		scanf("%s", password);
		a = strlen(password);
	}
	p = (struct login_a *)malloc(sizeof(struct login_a));
	q = (struct login_a *)malloc(sizeof(struct login_a));
	q = head_a->next;
	strcpy(p->username, username);
	strcpy(p->password, password);
	head_a->next = p;
	p->next = q;
}

struct login_a *find_l(struct login_a *head_a, char username[20])//查询管理员登陆账号
{
	struct login_a *p, *q;
	q = (struct login_a *)malloc(sizeof(struct login_a));
	int i = 0;
	for (p = head_a; p != NULL; p = p->next)
		if (!strcmp(username, p->username))
		{
			i = 1;
			break;
		}
	if (i == 0)
	{
		printf("查询不到结果，请重新输入:");
		getchar();
		scanf("%s", username);
		find_l(head_a, username);
	}
	return p;
}

void delete_1(struct login_a *head_a, char username[20])//删除账户
{
	struct login_a *p, *q;
	p = (struct login_a *)malloc(sizeof(struct login_a));
	q = (struct login_a *)malloc(sizeof(struct login_a));
	p = find_l(head_a, username);
	q->next = p;
	q->next = p->next;
	free(p);
}

void change_l_a(struct login_a *head_a, char username[20])//修改管理员密码
{
	struct login_a *p;
	p = (struct login_a *)malloc(sizeof(struct login_a));
	p = find_l(head_a, username);
	char password_o[20], password_n[20];
	printf("请输入旧的密码:\n");
	scanf("%s", password_o);
	while (strcmp(p->password, password_o))
	{
		printf("密码输入错误，请重新输入\n");
		scanf("%s", password_o);
	}
	printf("请输入新的密码:\n");
	scanf("%s", password_n);
	strcpy(p->password, password_n);
	printf("密码修改成功!!!\n");
	printf("按任意键返回\n");
	getchar();
}

void save_2(struct login_a *head_a)//管理员登陆文件保存
{
	struct login_a *log, *p;
	FILE *fp;
	fp = fopen("d:/login_a.txt", "wt+");
	log = p = head_a;
	while (log)
	{
		p = log ->next;
		if (!p)
		{
			fprintf(fp, "%s\t%s", log->username, log->password);
			break;
		}
		fprintf(fp, "%s\t%s", log->username, log->password);
		log = log->next;
	}
	printf("文件写入成功,请按任意键\n");
	getchar();
	fclose(fp);
}

struct login_a *inf_l_a()//管理员密码文件信息录入链表
{
	struct login_a *head_a, *r, *stu;
	head_a = (struct login_a *)malloc(sizeof(struct login_a));
	FILE *fp;
	printf("***********文件读入*************\n");
	fp = fopen("d:/login_a.txt", "rt");
	r = head_a;
	while (!feof(fp))
	{
		stu = (struct login_a *)malloc(sizeof(struct login_a));
		fscanf(fp, "%s %s", stu->username, stu->password);
		r->next = stu;
		r = stu;
	}
	r->next = NULL;
	fclose(fp);
	printf("文件读取成功！！\n");
	printf("正在跳转，请稍后……\n");
	Sleep(1000);
	system("cls");
	head_a = head_a->next;
	return head_a;
}

struct login_t//老师账号密码
{
	char username[20];
	char password[20];
	struct login_t *next;
};

int main()
{
	struct student *head;
	//head = NULL;
	head = inf_1();
	menu(head);
}