#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
#include"string.h"
void teacher(struct student *head);//��ʦ�˴�ӡ��Ŀ
void administrator(struct student *head);//����Ա�˴�ӡ��Ŀ
void student_1(struct student *head);//ѧ���˴�ӡ��Ŀ
void logininf(struct student *head);//��¼��Ϣ�޸Ĵ�ӡ��Ŀ
struct student *create();//������Ϣ����
struct student *inf_1();//���ļ�������Ϣ������
struct student *find(struct student *head, char num[9]);//����
void change_1(struct student *head, char num[9]);//�޸�
void delete_1(struct student *head, char num[9]);//ɾ��
void ywsort(struct student *head);//��������
void sxsort(struct student *head);//��ѧ����
void yysort(struct student *head);//Ӣ������
void sort_1(struct student *head);//��������ӡ
void numsort(struct student *head);//ѧ������
void chaxun(struct student *head, char num[9]);//��ѯ��Ϣ
void insert(struct student *head);//������Ϣ
void save_1(struct student *head);//���浽�ļ�
void output();//��ӡ������Ŀ

void save_2(struct login_a *head_a);//����Ա��½�ļ�����
void change_l_a(struct login_a *head_a, char username[20]);//�޸Ĺ���Ա����
void delete_1(struct login_a *head_a, char username[20]);//ɾ���˻�
void insert_l_a(struct login_a *head_a);//���ӹ���Ա��¼����ڵ�
struct login_a *inf_l_a();//����Ա�����ļ���Ϣ¼������
struct login_a *find_l(struct login_a *head_a, char username[20]);//��ѯ����Ա��½�˺�
struct login_a *create_a();//��������Ա��½����

struct student
{
	char num[9];   //ѧ��
	char name[9];  //����
	char class1[5];//�༶
	int yw;        //���ĳɼ�
	int sx;        //��ѧ�ɼ�
	int yy;        //Ӣ��ɼ�
	struct student *next;
};

struct login_a //����Ա�˺�����
{
	char username[20];
	char password[20];
	char identity;
	struct login_a *next;
};

struct student *create()
{
	struct student *head, *p, *q;
	char num[9];    //ѧ��
	char name[9];   //����
	char class1[5]; //�༶
	int yw;			//���ĳɼ�
	int sx;			//��ѧ�ɼ�
	int yy;			//Ӣ��ɼ�
	head = NULL;
	int i, n;
	printf("������ѧ��������");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		getchar();
		printf("�������%dλͬѧѧ�ţ�", i + 1);
		scanf("%s", num);
		int a = strlen(num);
		while (a != 8)
		{
			printf("ѧ���������������8Ϊѧ��:");
			scanf("%s", num);
			a = strlen(num);
		}
		//getchar();
		printf("�������%dλͬѧ������", i + 1);
		scanf("%s", name);
		//getchar();
		printf("�������%dλͬѧ�༶��", i + 1);
		scanf("%s", class1);
		a = strlen(class1);
		while (a != 4)
		{
			printf("�༶���������������ȷ�İ༶:");
			scanf("%s", class1);
			a = strlen(class1);
		}
		//getchar();
		printf("�������%dλͬѧ���ĳɼ���", i + 1);
		scanf("%d", &yw);
		while (yw > 100 || yw < 0)
		{
			printf("�ɼ������������������:\n");
			scanf("%d", &yw);
		}
		printf("�������%dλͬѧ��ѧ�ɼ���", i + 1);
		scanf("%d", &sx);
		while (sx > 100 || sx < 0)
		{
			printf("�ɼ������������������:\n");
			scanf("%d", &sx);
		}
		printf("�������%dλͬѧӢ��ɼ���", i + 1);
		scanf("%d", &yy);
		while (yy > 100 || yy < 0)
		{
			printf("�ɼ������������������:\n");
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
	printf("�������ļ�·�����ļ�����");
	fp = fopen("d:/1.txt", "wt+");
	/*
	if (fp == NULL)
	{
	printf("�Բ����ļ��򿪴��������������ļ�λ��\n");
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
	printf("�ļ�д��ɹ�,�밴�����\n");
	getchar();
	fclose(fp);
}

struct student *inf_1()
{
	struct student *head, *r, *stu;
	head = (struct student *)malloc(sizeof(struct student));
	FILE *fp;
	printf("***********�ļ�����*************\n");
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
	printf("�ļ���ȡ�ɹ�����\n");
	printf("������ת�����Ժ󡭡�\n");
	Sleep(1000);
	system("cls");
	head = head->next;
	return head;
}

void output()
{
	struct student *p, *head, *stu;
	head = inf_1();
	printf("ѧ��\t����\t�༶\t����\t��ѧ\tӢ��\n");
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
	char num[9];	 //ѧ��
	char name[9];	 //����
	char class1[5];  //�༶
	int yw;			 //���ĳɼ�
	int sx;			 //��ѧ�ɼ�
	int yy;			 //Ӣ��ɼ�
	printf("������ͬѧѧ�ţ�");
	scanf("%s", num);
	int a = strlen(num);
	while (a != 8)
	{
		printf("ѧ���������������8λѧ��:");
		scanf("%s", num);
		a = strlen(num);
	}
	printf("������ͬѧ������");
	scanf("%s", name);
	printf("������ͬѧ�༶��");
	scanf("%s", class1);
	a = strlen(class1);
	while (a != 4)
	{
		printf("�༶���������������ȷ�İ༶:");
		scanf("%s", class1);
		a = strlen(class1);
	}
	printf("������ͬѧ���ĳɼ���");
	scanf("%d", &yw);
	while (yw > 100 || yw < 0)
	{
		printf("�ɼ������������������:\n");
		scanf("%d", &yw);
	}
	printf("������ͬѧ��ѧ�ɼ���");
	scanf("%d", &sx);
	while (sx > 100 || sx < 0)
	{
		printf("�ɼ������������������:\n");
		scanf("%d", &sx);
	}
	printf("������ͬѧӢ��ɼ���");
	scanf("%d", &yy);
	while (yy > 100 || yy < 0)
	{
		printf("�ɼ������������������:\n");
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
		printf("��ѯ�������������������:");
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
	printf("��������������������������������������������������\n");
	printf("��        1.ѧ��         ��\n");
	printf("��        2.����         ��\n");
	printf("��        3.�༶         ��\n");
	printf("��        4.���ĳɼ�     ��\n");
	printf("��        5.��ѧ�ɼ�     ��\n");
	printf("��        6.Ӣ��ɼ�     ��\n");
	printf("��������������������������������������������������\n");
	printf("��������Ҫ�޸ĵ�����:");
	scanf("%c", &a);
	while (a > '6' || a < '1')
	{
		printf("��������ȷ�����(1~6)!!!\n");
		printf("����������\n");
		scanf("%c", &a);
	}
	if (a == '1')
	{
		char num[9];
		printf("������ͬѧѧ�ţ�");
		scanf("%s", num);
		int x = strlen(num);
		while (x != 8)
		{
			printf("ѧ���������������8λѧ��:");
			scanf("%s", num);
			x = strlen(num);
		}
		strcpy(p->num, num);
	}
	if (a == '2')
	{
		char name[9];  //����
		printf("������ͬѧ������");
		scanf("%s", name);
		strcpy(p->name, name);
	}
	if (a == '3')
	{
		char class1[5];//�༶
		printf("������ͬѧ�༶��");
		scanf("%s", class1);
		int x = strlen(class1);
		while (x != 8)
		{
			printf("ѧ���������������8λѧ��:");
			scanf("%s", class1);
			x = strlen(class1);
		}
		strcpy(p->class1, class1);
	}
	if (a == '4')
	{
		int yw;        //���ĳɼ�
		printf("������ͬѧ���ĳɼ���");
		scanf("%d", &yw);
		while (yw > 100 || yw < 0)
		{
			printf("�ɼ������������������:\n");
			scanf("%d", &yw);
		}
		p->yw = yw;
	}
	if (a == '5')
	{
		int sx;        //��ѧ�ɼ�
		printf("������ͬѧ��ѧ�ɼ���");
		scanf("%d", &sx);
		while (sx > 100 || sx < 0)
		{
			printf("�ɼ������������������:\n");
			scanf("%d", &sx);
		}
		p->sx = sx;
	}
	if (a == '6')
	{
		int yy;        //Ӣ��ɼ�
		printf("������ͬѧӢ��ɼ���");
		scanf("%d", &yy);
		while (yy > 100 || yy < 0)
		{
			printf("�ɼ������������������:\n");
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
				//����ѧ��
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//��������
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//�����༶
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//�������ĳɼ�
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//������ѧ�ɼ�
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//����Ӣ��ɼ�
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("ѧ��\t����\t�༶\t����\t��ѧ\tӢ��\n");
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
				//����ѧ��
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//��������
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//�����༶
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//�������ĳɼ�
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//������ѧ�ɼ�
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//����Ӣ��ɼ�
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("ѧ��\t����\t�༶\t����\t��ѧ\tӢ��\n");
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
				//����ѧ��
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//��������
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//�����༶
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//�������ĳɼ�
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//������ѧ�ɼ�
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//����Ӣ��ɼ�
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("ѧ��\t����\t�༶\t����\t��ѧ\tӢ��\n");
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
				//����ѧ��
				char temp_1[9];
				strcpy(temp_1, cur->num);
				strcpy(cur->num, cur->next->num);
				strcpy(cur->next->num, temp_1);
				//��������
				char temp_2[9];
				strcpy(temp_2, cur->name);
				strcpy(cur->name, cur->next->name);
				strcpy(cur->next->name, temp_2);
				//�����༶
				char temp_3[5];
				strcpy(temp_3, cur->class1);
				strcpy(cur->class1, cur->next->class1);
				strcpy(cur->next->class1, temp_3);
				//�������ĳɼ�
				int temp_4 = cur->yw;
				cur->yw = cur->next->yw;
				cur->next->yw = temp_4;
				//������ѧ�ɼ�
				int temp_5 = cur->sx;
				cur->sx = cur->next->sx;
				cur->next->sx = temp_5;
				//����Ӣ��ɼ�
				int temp_6 = cur->yy;
				cur->yy = cur->next->yy;
				cur->next->yy = temp_6;
			}
			cur = cur->next;
		}
		teil = cur;
		cur = head;
	}
	printf("ѧ��\t����\t�༶\t����\t��ѧ\tӢ��\n");
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
		printf("        1.�������ĳɼ�����\n");
		printf("        2.������ѧ�ɼ�����\n");
		printf("        3.����Ӣ��ɼ�����\n");
		printf("        3.����ѧ������\n");
		printf("        0.������һ��\n");
		printf("********************\n");
		printf("������������Ϣ:");
		scanf("%c", &a);
		while (a > '3' || a < '0')
		{
			printf("��������ȷ�����(0~3)!!!\n");
			printf("����������\n");
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
			printf("���������Ժ󡤡���\n");
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
	printf("ѧ��\t����\t�༶\t����\t��ѧ\tӢ��\n");
	printf("%s\t%s\t%s\t%d\t%d\t%d\n", p->num, p->name, p->class1, p->yw, p->sx, p->yy);
	getchar();
}

void menu(struct student *head)//���˵�
{
	char a;
	printf("********************\n");
	printf("        1.����Ա\n");
	printf("        2.��ʦ\n");
	printf("        3.ѧ��\n");
	printf("        0.�˳�ϵͳ\n");
	printf("********************\n");
	printf("������������Ϣ:");
	scanf("%c", &a);
	while (a > '3' || a < '0')
	{
		printf("��������ȷ�����(0~3)!!!\n");
		printf("����������\n");
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
		printf("�˳������Ժ󡤡���\n");
		exit(0);
	}
}

void login_1(struct login_a *head_a)
{
	printf("�������˺�:\n");
	char username[20];
	scanf("%s", username);
	printf("����������:\n");
	char password[20];
	scanf("%s", password);
	struct login_a *p;
	p = find_l(head_a, username);
	int i = 0;
	while (strcmp(p->password, password))
	{
		printf("������������㻹��%d�λ��ᣬ����������\n", 3 - i);
		scanf("%s", password);
		i++;
		if (i == 2)
		{
			printf("����3�δ������룬�����˳�!!!\n");
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
		printf("\t1.�����ʦ�˺�\t2.�޸���ʦ����\n");
		printf("\t3.���ѧ����Ϣ\t4.�޸�ѧ������\n");
		printf("\t5.�޸��Լ�����\t0.������һ��\n");
		scanf("%c", &a);
		while (a > '5' || a < '0')
		{
			printf("��������ȷ�����(0~5)!!!\n");
			printf("����������\n");
			scanf("%c", &a);
		}
		switch (a)
		{
		case '1':
			printf("������������");
			Sleep(1000);
			logininf(head,head_a);
			break;
		case '2':
			printf("������������");
			Sleep(1000);
			logininf(head, head_a);
			break;
		case '3':
			printf("������������");
			Sleep(1000);
			logininf(head, head_a);
			break;
		case '4':
			printf("������������");
			Sleep(1000);
			logininf(head, head_a);
			break;
		case '5':
			char username[20];
			scanf("%s", username);
			change_l_a(head_a,username);
			break;
		case '0':
			printf("���ڷ�����һ�������Եȡ���\n");
			Sleep(1000);
			administrator(head, head_a);
			break;
		}
	}
	

}

void administrator(struct student *head, struct login_a *head_a)//����Աѡ��
{
	char a;
	while (1)
	{
		getchar();
		system("cls");
		printf("********************\n");
		printf("\t1.�½�ѧ����Ϣ	2.�޸�ѧ����Ϣ    3.ɾ��ѧ����Ϣ\n");
		printf("\t4.���ѧ����Ϣ	5.ѧ����Ϣ����    6.��ѯѧ����Ϣ\n");
		printf("\t7.��ӡѧ����Ϣ	8.���浽�ļ�      9.��½��Ϣ����\n");
		printf("\t0.�˳�ϵͳ\n");
		printf("********************\n");
		printf("����������Ҫ�Ĺ���:");
		scanf("%c", &a);
		while (a > '9' || a < '0')
			// while (strcmp(a,"15") > 0 || strcmp(a,"0")<0)
		{
			printf("��������ȷ�����(0~15)!!!\n");
			printf("����������\n");
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
				printf("ѧ���������������8λѧ��:");
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
				printf("ѧ���������������8λѧ��:");
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
			printf("������ѧ��ѧ��:");
			scanf("%s", num);
			getchar();
			int x = strlen(num);
			while (x != 8)
			{
				printf("ѧ���������������8λѧ��:");
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
			printf("�˳������Ժ󡤡���\n");
			Sleep(1000);
			exit(0);
		}
		break;
		}
	}
}

void teacher(struct student *head)//��ʦѡ��
{
	char a;
	while (1)
	{
		system("cls");
		printf("********************\n");
		printf("\t1.��ӱ���ѧ����Ϣ    2.�޸ı���ѧ����Ϣ    3.ɾ������ѧ����Ϣ\n");
		printf("\t4.����ѧ���ɼ�����    5.����ѧ��ѧ������    6.��ѯ����ѧ����Ϣ\n");
		printf("\t7.�޸�����                                  0.������һ��\n");
		printf("********************\n");
		printf("����������Ҫ�Ĺ���:");
		scanf("%c", &a);
		while (a > '7' || a < '0')
		{
			printf("��������ȷ�����(0~7)!!!\n");
			printf("����������\n");
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
				printf("ѧ�������������������8λѧ��:");
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
				printf("ѧ�������������������8λѧ��:");
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
				printf("ѧ�������������������8λѧ��:");
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
			printf("��������������\n");
			printf("����������һ��```\n");
			Sleep(3000);
			teacher(head);
		}
		break;
		case '0':
		{
			system("cls");
			printf("���������Ժ󡤡���\n");
			Sleep(1000);
			exit(0);
		}
		break;
		}
	}
}

void student_1(struct student *head)//ѧ��ѡ��
{
	system("cls");
	char a;
	char num[9];
	printf("���������ѧ�ţ�");
	scanf("%s", num);
	int x = strlen(num);
	while (x != 8)
	{
		printf("ѧ�������������������8λѧ��:");
		scanf("%s", num);
		x = strlen(num);
	}
	while (1)
	{
		printf("********************\n");
		printf("\t1.�鿴�Լ���Ϣ\n");
		printf("\t2.�鿴�ɼ�����\n");
		printf("\t3.�޸��Լ�����\n");
		printf("\t0.������һ��\n");
		printf("********************\n");
		printf("����������Ҫ�Ĺ���:");
		scanf("%c", &a);
		while (a > '3' || a < '0')
		{
			printf("��������ȷ�����(0~3)!!!\n");
			printf("����������\n");
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
			printf("��������������\n");
			printf("����������һ��```\n");
			Sleep(1000);
			student_1(head);
		}
		break;
		case '0':
		{
			system("cls");
			printf("���������Ժ󡤡���\n");
			Sleep(1000);
			exit(0);
		}
		break;
		}
	}
}



struct login_a *create_a()//��������Ա��½����
{
	struct login_a *head_a, *p;
	char username[20];	//�˺�
	char password[20];  //����
	head_a = NULL;
	getchar();
	printf("�������û���");
	gets_s(username);
	printf("����������");
	gets_s(password);
	p = (struct login_a *)malloc(sizeof(struct login_a));
	strcpy(p->username, username);
	strcpy(p->password, password);
	p->next = NULL;
	head_a = p;
	return head_a;
}

void insert_l_a(struct login_a *head_a)//���ӹ���Ա��¼����ڵ�
{
	struct login_a *p, *q;
	char username[20];
	char password[20];
	printf("�������˺ţ�");
	scanf("%s", username);
	int a = strlen(username);
	while (a > 20 || a < 1)
	{
		printf("�˺Ÿ�ʽ��������������:");
		scanf("%s", username);
		a = strlen(username);
	}
	printf("���������룺");
	scanf("%s", password);
	a = strlen(password);
	while (a > 20 || a < 1)
	{
		printf("�����ʽ��������������:");
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

struct login_a *find_l(struct login_a *head_a, char username[20])//��ѯ����Ա��½�˺�
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
		printf("��ѯ�������������������:");
		getchar();
		scanf("%s", username);
		find_l(head_a, username);
	}
	return p;
}

void delete_1(struct login_a *head_a, char username[20])//ɾ���˻�
{
	struct login_a *p, *q;
	p = (struct login_a *)malloc(sizeof(struct login_a));
	q = (struct login_a *)malloc(sizeof(struct login_a));
	p = find_l(head_a, username);
	q->next = p;
	q->next = p->next;
	free(p);
}

void change_l_a(struct login_a *head_a, char username[20])//�޸Ĺ���Ա����
{
	struct login_a *p;
	p = (struct login_a *)malloc(sizeof(struct login_a));
	p = find_l(head_a, username);
	char password_o[20], password_n[20];
	printf("������ɵ�����:\n");
	scanf("%s", password_o);
	while (strcmp(p->password, password_o))
	{
		printf("���������������������\n");
		scanf("%s", password_o);
	}
	printf("�������µ�����:\n");
	scanf("%s", password_n);
	strcpy(p->password, password_n);
	printf("�����޸ĳɹ�!!!\n");
	printf("�����������\n");
	getchar();
}

void save_2(struct login_a *head_a)//����Ա��½�ļ�����
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
	printf("�ļ�д��ɹ�,�밴�����\n");
	getchar();
	fclose(fp);
}

struct login_a *inf_l_a()//����Ա�����ļ���Ϣ¼������
{
	struct login_a *head_a, *r, *stu;
	head_a = (struct login_a *)malloc(sizeof(struct login_a));
	FILE *fp;
	printf("***********�ļ�����*************\n");
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
	printf("�ļ���ȡ�ɹ�����\n");
	printf("������ת�����Ժ󡭡�\n");
	Sleep(1000);
	system("cls");
	head_a = head_a->next;
	return head_a;
}

struct login_t//��ʦ�˺�����
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