#include"stdio.h"
#include"stdlib.h"
struct node
{
    int data;
    struct node *next;
}; //创建链表
int main()
{
    struct node *head, *p, *q;
    int i, n, a;
    scanf("%d", &n);
    head = NULL;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;
        p->next = NULL;
        if(head==NULL)
            head = p;
        else
        {
            q->next = p;
        }
        q = p;
    }
    // 头插法
    scanf("%d", &a);
    p = (struct node *)malloc(sizeof(struct node));
    p->next = head;
    p->data = a;
    head = p;
    //尾插法
    scanf("%d", &a);
    p = (struct node *)malloc(sizeof(struct node));
    p->data = a;
    q->next = NULL;
    q->next = p;
    p->next = NULL;
    ///删除
    int del;
    struct node *pTemp, *pPre;
    printf("请输入需要删除的位置:\n");
    scanf("%d", &del);
    pTemp = head;
    pPre = pTemp;
    for (i = 1; i < del; i++)
    {
        pPre = pTemp;
        pTemp = pTemp->next;
    }
    pPre->next = pTemp->next;
    free(pTemp);
    //冒泡排序
    struct node *cur = NULL;
    struct node *teil = NULL;
    cur = head;
    while (cur != teil)
    {
        while (cur->next != teil)
        {
            if (cur->data > cur->next->data)
            {
                int tmp = cur->data;
                cur->data = cur->next->data;
                cur->next->data = tmp;
            }
            cur = cur->next;
        }
        teil = cur;
        cur = head;
	}
    // 输出
    /*t = head;
    while(t!=NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }*/
    for (p = head; p; p = p->next)
        printf("%d ", p->data);
    return 0;
}