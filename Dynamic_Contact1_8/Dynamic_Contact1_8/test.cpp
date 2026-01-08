#include "Dynamic_Contact.h"

//静态版本  数组大小100

void menu()
{
	printf("---------------------------\n");
	printf("-----1.add      2.del------\n");
	printf("-----3.search   4.modify---\n");
	printf("-----5.show     6.sort-----\n");
	printf("-----0.exit     -----------\n");
	printf("---------------------------\n");
}

int main()
{
	int input = 0;
	Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();

		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			searchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			DestroyContact(&con);
			printf("欢迎下次使用\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}