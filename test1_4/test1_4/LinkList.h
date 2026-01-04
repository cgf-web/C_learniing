#pragma once   //防止头文件重复

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#ifdef  __cplusplus
extern "C" {
#endif

	//定义链表节点类型
	struct LinkNode 
	{
		int data;
		struct LinkNode* next;
	};

	//初始化链表
	struct LinkNode* Init_LinkList();
	//在值为oldval的后面插入新节点newval
	void InsertByValue_LinkList(struct LinkNode* header, int oldval, int newval);
	//删除值为val的节点
	void RemoveByValue_LinkList(struct LinkNode* header, int delValue);
	//遍历
	void Foreach_LinkList(struct LinkNode* header);
	//销毁链表
	void Destroy_LinkList(struct LinkNode* header);
	//清空链表
	void Clear_LinkList(struct LinkNode* header);


#ifdef  __cplusplus
}
#endif
