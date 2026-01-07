#include "contact.h"


void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	printf("请输入名字:>");
	scanf_s("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf_s("%d", &pc->data[pc->count].age);
	printf("请输入性别:>");
	scanf_s("%s", pc->data[pc->count].sex);
	printf("请输入电话号:>");
	scanf_s("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf_s("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("添加成功\n");
}

void ShowContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄",
		"性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s", pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);	
		printf("\n");	
	}
}

static int FindByName(Contact *pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	char name_tem[MAX_NAME];
	if (pc->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入删除人姓名\n");
	scanf_s("%s", name_tem);
	int pos =FindByName(pc, name_tem);
	if (pos == -1)
	{
		printf("要删除的联系人不存在\n");
	}
	int i = 0;
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}

void searchContact( Contact* pc)
{
	assert(pc);
	char name_tem[MAX_NAME];
	if (pc->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入查找人姓名\n");
	scanf_s("%s", name_tem);
	int pos = FindByName(pc, name_tem);
	if (pos == -1)
	{
		printf("查找联系人不存在\n");
		return;
	}
	printf("查找到联系人,下标为:>%d\n", pos);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄",
		"性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name, pc->data[pos].age,
			pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name_tem[MAX_NAME];
	if (pc->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要修改人姓名\n");
	scanf_s("%s", name_tem);
	int pos = FindByName(pc, name_tem);
	if (pos == -1)
	{
		printf("要修改联系人不存在\n");
		return;
	}
	printf("请输入修改后名字:>");
	scanf_s("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf_s("%d", &pc->data[pos].age);
	printf("请输入性别:>");
	scanf_s("%s", pc->data[pos].sex);
	printf("请输入电话号:>");
	scanf_s("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf_s("%s", pc->data[pos].addr);
	printf("添加成功\n");
}


int cmp_peo_by_name(const void* e1, const void* e2) 
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo),cmp_peo_by_name);
	printf("排序成功\n");
}