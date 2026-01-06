#include <stdio.h>

//#define MaxSize  10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void InitList(SqList& L)
//{
//	for (int i = 0; i < MaxSize; i++)
//	{
//		L.data[i] = 0;
//		L.length = 0;
//	}
//	
//}
//int main()
//{
//	SqList L;
//	InitList(L);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d]=%d\n", i, L.data[i]);
//	}
//}
#include <stdlib.h>
//单链表
typedef int ElemType;

typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;
typedef LNode* LinkList;

//LNode* L <= = > LinkList L;

LNode* GetElem(LinkList L, int i)//强调这是一个单链表   使用LinkList
{									//强调这是一个节点  使用LNode*
	int j = 1;
	LNode* p = L->next;
	if (i == 0)
		return L;
	if (i < 1)
	{
		return NULL;
	}
	while (p != NULL && j < 1)
	{
		p = p->next;
		j++;
	}
	return p;
}

bool InitList(LNode* L)
{
	L = NULL;
	return true;
}

void test()
{
	LNode* L;
	InitList(L);
}

bool ListInsert(LinkList& L, int i, ElemType e)
{
	if (i < 1)
	{
		return false;
	}
	LNode* p;//指针p指向当前扫描到的节点
	int j = 0;//当前p指向的是第几个节点
	p = L;//L指向头节点，头节点是第0个节点
	while (p != NULL && j < i - 1)//循环找到第i-1个节点
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{
		return false;
	}
	LNode* s = (LNode *)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;//将节点s连到p之后
	return true;//插入成功
}


//后插操作:在p节点之后插入元素e
bool InsertNextNode(LNode* p, ElemType e)
{
	if (p == NULL)
	{
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)
		return false;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

//前插操作
bool InsertPriorNode(LNode* p, ElemType e)
{
	if (p == NULL)
	{
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)
	{
		return false;
	}
	s->next = p-> next;
	p->next = s;
	s->data = p->data;
	p->data = e;
	return e;
}

bool InsertPriorNode(LNode* p, LNode* s)
{
	if (p == NULL || s == NULL)
	{
		return false;
	}
	s->next = p->next;
	p->next = s;
	ElemType temp = p->data;
	p->data = s->data;
	s->data = temp;
	return true;
}

bool ListDelete(LinkList& L, int i, ElemType& e)
{
	if (i < 1)
		return false;
	LNode* p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{	
		return false;
	}
	if(p->next==NULL)
	{
		return false;
	}

	LNode* q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}

//删除指定节点
bool DeleteNode(LNode* p)
{
	if (p == NULL)
	{
		return false;
	}
	LNode* q = p->next;
	p->data = p->next->data;
	p->next = q->next;
	free(q); 
	return true;
}

