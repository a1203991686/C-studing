#include"stdio.h"
#include"stdlib.h"
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *p, *q;
    q = p = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    int i, n;
    printf("请输入数据个数");
    scanf("%d", &n);
    p = head;
    for (i = 0; i < n; i++)
    {
        int data;
        scanf("%d", &data);
        p->data = data;
        if (head == NULL)
            head = p;
        else
        {
            q->next = p;
        }
        q = p;
    }
    q = NULL;

    //输出
    p = head;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }

//逆序
    p = head;
    struct node *pnew, *pnext;
    while (p)
    {
        pnext = p->next;
        p->next = pnew;
        pnew = p;
        p = pnext;
    }

    p = head;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}