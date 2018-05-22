#include<stdio.h>
#include<assert.h>
typedef int DataType;
typedef struct LinkNode
{
    DataType data;
    struct LinkNode *next;
} LinkNode, *pLinkNode; //���ṹ��
typedef struct LinkList
{
    LinkNode *pHead;    //ͷ���ָ��
} LinkList, *pLinkList; //����
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