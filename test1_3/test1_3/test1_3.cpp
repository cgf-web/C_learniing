#include <stdio.h>
#include <string.h>

//#define MAXSIZE  100
//typedef int ElemType;
//
//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int length;
//}SeqList;
//
////struct book
////{
////	int isbn;
////	char bookName[20];
////	double price;
////};
//
//void initList(SeqList* L)
//{
//	L->length = 0;
//}
//
//int appendElem(SeqList* L, ElemType e)
//{
//	if (L->length > MAXSIZE)
//	{
//		printf("顺序表已满\n");
//		return 0;
//	}
//	L->data[L->length] = e;//尾部添加元素
//	L->length++;
//	return 1;
//}
//
//void listElem(SeqList* L)
//{
//	int i = 0;
//	for (i = 0; i < L->length; i++)
//	{
//		printf("%d ", L->data[i]);
//	}
//	printf("\n");
//}
//
//int insertElem(SeqList* L, int pos, ElemType e)
//{
//	if (L->length > MAXSIZE)
//	{
//		printf("表已经满了\n");
//		return 0;
//	}
//	if (pos<1 || pos>L->length)
//	{
//		printf("插入位置错误\n");
//		return 0;
//	}
//	if (pos <= L->length)
//	{
//		for (int i = L->length - 1; i >= pos - 1; i--)
//		{
//			L->data[i + 1] = L->data[i];//元素后移
//		}
//		L->data[pos - 1] = e;
//		L->length++;
//		return 1;
//	}
//}
//
//int deleteElem(SeqList* L, int pos, ElemType* e)
//{
//	*e = L->data[pos - 1];//保存被删除的元素
//	if (pos < L->length)
//	{
//		for (int i = pos; i < L->length; i++)
//		{
//			L->data[i - 1] = L->data[i];//元素前移
//		}
//		L->length--;
//	}
//	return 1;
//}
//
//int findElem(SeqList* L, ElemType e)
//{
//	for (int i = 0; i < L->length; i++)
//	{
//		if (L->data[i] == e)
//		{
//			return i + 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	//1.线性表  ： 由n个数据元素按顺序排列组成的有限序列    形同数据类型的集合
//	//2.线性表的存储结构
//
//	//book b;
//	//b.isbn = 767654;
//	//strcpy(b.bookName, "Java编程思想");
//	//b.price = 90.0;
//
//	SeqList list;
//	initList(&list);
	/*printf("初始化成功，目前长度占用%d\n", list.length);
	printf("目前占用内存%zu字节\n", sizeof(list.data));
	appendElem(&list, 88);
	appendElem(&list, 67);
	appendElem(&list, 45);
	appendElem(&list, 17);
	listElem(&list);
	insertElem(&list, 2, 18);
	listElem(&list);
	ElemType delData;
	deleteElem(&list, 2, &delData);
	printf("被删除的数据是：%d\n", delData);
	listElem(&list);
	printf("第%d个位置\n", findElem(&list, 45));

	return 0;*/
//}

//动态分配内存，自己可控
//#include <stdlib.h>
//#define MAXSIZE 100
//
//typedef int ElemType;
//
//typedef struct {
//	ElemType* data;//指向开辟的堆内存的首地址
//	int length;
//}SeqList;
//
//SeqList* initList()
//{
//	SeqList* L = (SeqList*)malloc(sizeof(SeqList));
//	L->data = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
//	L->length = 0;
//	return L;
//}
//
//int appendElem(SeqList* L, ElemType e)
//{
//	if (L->length > MAXSIZE)
//	{
//		printf("顺序表已满\n");
//		return 0;
//	}
//	L->data[L->length] = e;//尾部添加元素
//	L->length++;
//	return 1;
//}
//
//void listElem(SeqList* L)
//{
//	int i = 0;
//	for (i = 0; i < L->length; i++)
//	{
//		printf("%d ", L->data[i]);
//	}
//	printf("\n");
//}
//
//int insertElem(SeqList* L, int pos, ElemType e)
//{
//	if (L->length > MAXSIZE)
//	{
//		printf("表已经满了\n");
//		return 0;
//	}
//	if (pos<1 || pos>L->length)
//	{
//		printf("插入位置错误\n");
//		return 0;
//	}
//	if (pos <= L->length)
//	{
//		for (int i = L->length - 1; i >= pos - 1; i--)
//		{
//			L->data[i + 1] = L->data[i];//元素后移
//		}
//		L->data[pos - 1] = e;
//		L->length++;
//		return 1;
//	}
//}
//
//int deleteElem(SeqList* L, int pos, ElemType* e)
//{
//	*e = L->data[pos - 1];//保存被删除的元素
//	if (pos < L->length)
//	{
//		for (int i = pos; i < L->length; i++)
//		{
//			L->data[i - 1] = L->data[i];//元素前移
//		}
//		L->length--;
//	}
//	return 1;
//}
//
//int findElem(SeqList* L, ElemType e)
//{
//	for (int i = 0; i < L->length; i++)
//	{
//		if (L->data[i] == e)
//		{
//			return i + 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	SeqList* list = initList();
//	printf("初始化成功，目前长度占用%d\n", list->length);
//	printf("目前占用内存%zu字节\n", sizeof(list->data));
//	appendElem(list, 88);
//	appendElem(list, 67);
//	appendElem(list, 45);
//	appendElem(list, 17);
//	listElem(list);
//	insertElem(list, 2, 18);
//	listElem(list);
//	ElemType delData;
//	deleteElem(list, 2, &delData);
//	printf("被删除的数据是：%d\n", delData);
//	listElem(list);
//	printf("查找的元素在第%d个位置\n", findElem(list, 45));
//
//	return 0;
//}

//线性表的顺序存储形式

//链表:用一组任意的存储单元存储线性表的数据元素(这组存储单元可以是连续的，也可以是不连续的)。
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;

typedef struct Node
{
	ElemType data;
	struct Node* next;
}Node;

Node* initList()//创建了一个头节点
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->data = 0;
	head->next = NULL;
	return head;
}
//头插法
int insertHead(Node* L, ElemType e)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->next = L->next;
	L->next = p;
	return 1;//头插法的顺序和输入顺序相反
}
//获取尾节点
Node* get_tail(Node* L)
{
	Node* p = L;
	while (p->next != NULL)
	{
		p = p->next;	
	}
	return p;
}
//尾插法
Node* insertTail(Node* tail, ElemType e)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	tail->next = p;
	p->next = NULL;
	return p;//尾插法的顺序和输入顺序相同
}

void listNode(Node* L)
{
	Node* p = L->next;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
	printf("\n");
}

//在指定位置插入节点
int insertNode(Node* L, int pos, ElemType e)
{
	Node* p = L;
	int i = 0;
	while (i < pos - 1)
	{
		p = p->next;
		i++;//
		if (p == NULL)
		{
			return 0;
		}
	}
	Node* q = (Node*)malloc(sizeof(Node));
	q->data = e;
	q->next = p->next;
	p->next = q;
	return 1;
}

//在指定位置删除节点
int deleteNode(Node*L,int pos)
{
	Node* p = L;
	int i = 0;
	while (i < pos - 1)
	{
		p = p->next;
		i++;
		if (p == NULL)
		{
			return 0;
		}
	}
	if (p->next == NULL)
	{
		printf("要删除的未知错误\n");
		return 0;
	}
	
	Node* q = p->next;//要删除的节点
	p->next = q->next;//前后连接
	free(q);
	return 1;
}
//计算链表长度
int listLength(Node *L)
{
	Node* p = L;
	int len = 0;
	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}
//释放链表
void freeList(Node* L)
{
	Node* p = L->next;
	Node* q;

	while (p != NULL)
	{
		q = p->next;
		free(q);
		p = q;
	}
	L->next = NULL;
}


int main()
{
	Node* list = initList();
	/*insertHead(list, 10);
	insertHead(list, 20);
	insertHead(list, 30);
	listNode(list);*/
	Node* tail = get_tail(list);
	tail = insertTail(tail, 10);
	tail = insertTail(tail, 20);
	tail = insertTail(tail, 30);
	listNode(list);
	insertNode(list, 2, 15);
	listNode(list);
	deleteNode(list, 2);
	listNode(list);
	printf("链表长度:%d\n", listLength(list));
	freeList(list);
	printf("链表长度:%d\n", listLength(list));

	return 0;
}