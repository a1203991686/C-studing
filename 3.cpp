#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
struct node
{
	int data;
	struct node *next;
    struct node *last;
};

struct node *create()
{
	struct node *head, *q;
	q = (struct node *)malloc(sizeof(struct node));
	head = NULL;
	int n, i;
	printf("请输入输入数据的个数n:\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		struct node *p;
		p = (struct node *)malloc(sizeof(struct node));
		int data;
		scanf("%d", &data);
		p->data = data;
		if (head == NULL)
			head = p;
		else
			q->next = p;
		q = p;
	}
	q->next = NULL;
	return head;
}

void output(struct node *head)
{
	struct node *p;
	p = (struct node *)malloc(sizeof(struct node));
	p = head;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

struct node *insert_1(struct node *head)
{
	struct node *p, *q;
	p = (struct node *)malloc(sizeof(struct node));
	q = head;
	int data;
	printf("请输入需要添加的数:\n");
	scanf("%d", &data);
	p->data = data;
	head = p;
	p->next = q;
	return head;
}

struct node *delete_1(struct node *head)
{
	struct node *p, *q, *x;
	p = q = x = (struct node *)malloc(sizeof(struct node));
	p = head;
	int data;
	printf("请输入需要删除的数据:\n");
	scanf("%d", &data);
	if (p->data == data)
	{
		
		head->next = p->next;
		free(q);
	}
	else
	{
		while (p)
		{
			if (p->next->data == data)
			{
				x = p;
				break;
			}
		}
		q = x->next;
		x->next = q->next;
		free(q);
	}
	return head;
}

void nixu_1(struct node *head)
{

}
int main()
{
	//创建链表
	struct node *head;
	head = (struct node *)malloc(sizeof(struct node));
	printf("请先创建一个链表\n");
	head = create();
	while (1)
	{
		system("cls");
		printf("请输入所需内容\n");
		printf("1.增加\n");
		printf("2.删除\n");
		printf("3.逆序\n");
		printf("4.打印\n");
		printf("请输入所需的功能:\n");
		int a;
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			system("cls");
			head=insert_1(head);
			output(head);
			getchar();
			getchar();
			break;
		case 2:
			system("cls");
			head=delete_1(head);
			output(head);
			getchar();
			getchar();
			break;
		case 3:
			system("cls");
			nixu_1(head);
			output(head);
			getchar();
			getchar();
			break;
        case 4:
            system("cls");
            output(head);
			getchar();
            getchar();
            break;
        }
	}
	return 0;
}