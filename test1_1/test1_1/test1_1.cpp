#include <stdio.h>
#include <string.h>

#define MAXSIZE  100
typedef int ElemType;

typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}SeqList;

//struct book
//{
//	int isbn;
//	char bookName[20];
//	double price;
//};

void initList(SeqList* L)
{
	L->length = 0;
}

int appendElem(SeqList* L, ElemType e)
{
	if (L->length > MAXSIZE)
	{
		printf("顺序表已满\n");
		return 0;
	}
	L->data[L->length] = e;//尾部添加元素
	L->length++;
	return 1;
}

void listElem(SeqList* L)
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

int insertElem(SeqList* L, int pos, ElemType e)
{
	if (L->length > MAXSIZE)
	{
		printf("表已经满了\n");
		return 0;
	}
	if (pos<1 || pos>L->length)
	{
		printf("插入位置错误\n");
		return 0;
	}
	if (pos <= L->length)
	{
		for (int i = L->length - 1; i >= pos - 1; i--)
		{
			L->data[i + 1] = L->data[i];//元素后移
		}
		L->data[pos-1] = e;
		L->length++;
		return 1;
	}
}

int deleteElem(SeqList* L, int pos, ElemType *e)
{
	*e = L->data[pos - 1];//保存被删除的元素
	if (pos < L->length)
	{
		for (int i = pos; i < L->length; i++)
		{
			L->data[i - 1] = L->data[i];//元素前移
		}
		L->length--;
	}
	return 1;
}



int main()
{
	//1.线性表  ： 由n个数据元素按顺序排列组成的有限序列    形同数据类型的集合
	//2.线性表的存储结构
	
	//book b;
	//b.isbn = 767654;
	//strcpy(b.bookName, "Java编程思想");
	//b.price = 90.0;

	SeqList list;
	initList(&list);
	printf("初始化成功，目前长度占用%d\n", list.length);
	printf("目前占用内存%zu字节\n", sizeof(list.data));
	appendElem(&list, 88);
	appendElem(&list, 67);
	appendElem(&list, 45);
	appendElem(&list, 17);
	listElem(&list);
	insertElem(&list, 2, 18);
	listElem(&list);
	
	

	return 0;
}
