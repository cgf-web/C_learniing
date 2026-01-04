#include "LinkList.h"

//初始化链表
struct LinkNode* Init_LinkList()
{
	struct LinkNode* header = (struct LinkNode*)malloc(sizeof(struct LinkNode));
	header->data = 0; //头节点数据域可不存储有效数据
	header->next = NULL;

	//尾部指针
	struct LinkNode* pRear = header;

	int val = -1;
	while (true)
	{
		printf("输入要插入的数据:");
		scanf_s("%d", &val);
		if (val == -1)
		{
			break;
		}

		//先创建新节点
		struct LinkNode* newnode = (struct LinkNode*)malloc(sizeof(struct LinkNode));
		newnode->data = val;
		newnode->next = NULL;
		//新节点插入到链表中
		pRear->next = newnode;
		//更新尾部指针指向
		pRear = newnode;
	}
	return header;
}
//在值为oldval的后面插入新节点newval
void InsertByValue_LinkList(struct LinkNode* header, int oldval, int newval)
{
	if (NULL == header)
	{
		return;
	}
	//定了两个辅助指针变量
	struct LinkNode* pPrev = header;
	struct LinkNode* pCurrent = pPrev->next;

	while (pCurrent != NULL)
	{
		if (pCurrent->data == oldval)
		break;
		pPrev = pCurrent;
		pCurrent = pCurrent->next;
	}
#if 0
	//如果pCurent为NULL，说明链表中不存在值为oldval的节点
	if (pCurrent == NULL)
	{
		return;
	}
#endif

	//先创建新节点
	struct LinkNode* newnode = (struct LinkNode*)malloc(sizeof(struct LinkNode));
	newnode->data = newval;
	newnode->next - NULL;

	//新节点插入到链表中
	newnode->next = pCurrent;
	pPrev->next = newnode;
}


//删除值为val的节点
void RemoveByValue_LinkList(struct LinkNode* header, int delValue) 
{
	//
	if (NULL == header)
	{
		return;
	}
	//定义两个辅助指针变量
	struct LinkNode* pPrev = header;
	struct LinkNode* pCurrent =pPrev->next;
	while(pCurrent!=NULL)
	{
		if (pCurrent->data == delValue)
		{
			break;
		}


		//移动两个辅助指针
		pPrev = pCurrent;
		pCurrent = pCurrent ->next;
	}
	if (pCurrent == NULL)
	{
		return;
	}

	//重新建立待删除结点的前驱节点和后继节点的关系
	pPrev->next = pCurrent -> next;
	free(pCurrent);
	pCurrent = NULL;
}


//遍历
void Foreach_LinkList(struct LinkNode* header)
{
	if (NULL == header)
	{
		return;
	}
	//辅助指针变量
	struct LinkNode* pCurrent = (struct LinkNode*)malloc(sizeof(struct LinkNode));
	pCurrent = header;
	while (pCurrent != NULL)
	{
		printf("%d ", pCurrent->data);
		pCurrent = pCurrent->next;
	}

}

//销毁链表
void Destroy_LinkList(struct LinkNode* header)
{
	if (NULL == header)
	{
		return;
	}
	//辅助指针变量
	struct LinkNode* pCurrent = header;
	while (pCurrent != NULL)
	{
		struct LinkNode* pNext = pCurrent->next;
		printf("节点被销毁!\n");
		free(pCurrent);
		pCurrent = pNext;
	}
}


//清空链表
void Clear_LinkList(struct LinkNode* header)
{
	if (NULL == header)
	{
		return;
	}

	//辅助指针变量
	struct LinkNode* pCurrent = header->next;
	while (pCurrent != NULL)
	{
		//先保存当前节点的下一个节点地址
		struct LinkNode* pNext = pCurrent->next;
		//释放当前节点把内存
		free(pCurrent);
		//pCurrent指向下一个节点
		pCurrent = pNext;
	}
	header->next = NULL;
}