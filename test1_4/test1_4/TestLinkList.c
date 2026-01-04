#define _CRT_SECURE_NO_WARNINGS

void test()
{
	//初始化链表
	struct LinkNode* header=Init_LinkList();
	//打印链表
	Foreach_LinkList(header);
	//插入数据
	InsertByValue_LinkList(header, 200, 666);
	printf("\n---------------------\n");
	Foreach_LinkList(header);
	//清空链表
	Clear_LinkList(header);
	printf("\n---------------------\n");
	Foreach_LinkList(header);	
	InsertByValue_LinkList(header, 1000, 111);
	InsertByValue_LinkList(header, 1000, 211);
	InsertByValue_LinkList(header, 1000, 311);
	InsertByValue_LinkList(header, 1000, 411);
	printf("\n---------------------\n");
	Foreach_LinkList(header);	

	RemoveByValue_LinkList(header, 211);
	RemoveByValue_LinkList(header, 311);
	printf("\n---------------------\n");
	Foreach_LinkList(header);	

	//销毁链表
	Destroy_LinkList(header);
}



int main()
{
	test();
}