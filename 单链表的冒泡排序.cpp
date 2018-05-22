#include<stdio.h>
#include<assert.h>
typedef int DataType;
typedef struct LinkNode
{
    DataType data;
    struct LinkNode *next;
} LinkNode, *pLinkNode; //结点结构体
typedef struct LinkList
{
    LinkNode *pHead;    //头结点指针
} LinkList, *pLinkList; //链表
void BubbleSort (pLinkList pList)
{
    pLinkNode cur = NULL;
    pLinkNode teil = NULL;
    assert(pList);
    cur = pList->pHead;
    while(cur != teil)
	{
		while(cur->next != teil)
		{
			if(cur->data > cur->next ->data )
			{
                DataType tmp = cur->data;
                cur->data = cur->next->data;
                cur->next->data = tmp;
            }
            cur = cur->next;
        }
        teil = cur;
        cur = pList->pHead;
    }
    return;
}