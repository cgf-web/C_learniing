#include <stdio.h>
#include "game.h"
//数组传参时，形参有两种写法
//1.数组
//2.指针
//void bubble_sort(int arr[], int sz)//形参写法1   数组名是首元素的地址，即指针变量。占4/8字节
// void bubble_sort(int* arr, int sz)//形参写法2   指针变量。占4/8字节	·
//{
//	int i = 0; int j = 0; int temp = 0;
//	for (i = 0; i < sz - 1; i++)//趟数
//	{
//		for (j = 0; j < sz - 1 - i; j++)//每趟比较的次数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}


void menu()
{
	printf("**************************\n");
	printf("****** 1.开始游戏  ********\n");
	printf("****** 0.退出游戏  ********\n");
	printf("**************************\n");
	printf("请输入你的选择：");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		ret=IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board,ROW,COL);
		ComputerMove(board, ROW, COL);
		ret=IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board,ROW,COL);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board,ROW,COL);

}

int main()
{
	int i = 0;int j = 0;
	/*int arr[3][4] = {0};
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}*/
	/*int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%d  %p  ", i, j,arr[i][j],&arr[i][j]);
		}
		printf("\n");
	}*/
	
	//可以把二维数组理解成一维数组的数组  行可省略，列不可省略
	//arr[i][j] = *( *(arr + i) + j) 
	//有可能会出现越界访问，但编译器不一定会报错
	
	//错误示范
	/*int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (i = 0; i <3; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/
	
	//冒泡排序
	//int arr[] = {9,8,7,6,5,4,3,2,1,0 };//排成升序
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr,sz);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//数组名是首元素的地址
	//但有两个例外
	//1.sizeof(数组名)，这里的数组名表示的是整个数组的大小，单位是字节
	//2.&数组名，这里的数组名表示的是整个数组的地址，单位是地址
	//int arr[10] = { 0 };
	//printf("%p\n", arr);//00FBF9F8
	//printf("%p\n", arr + 1);//00FBF9FC
	//printf("----------\n");
	//printf("%p\n", &arr[0]);//00FBF9F8
	//printf("%p\n", &arr[0] + 1);//00FBF9FC
	//printf("---------\n");
	//int n = sizeof(arr);//40=4*10
	//printf("%d\n", n);

	//printf("%p\n", &arr);//00FBF9F8   +0x28(40个字节)
	//printf("%p\n", &arr + 1);//00FBFA20

	//int arr[3][4] ;
	//int sz = sizeof(arr);
	//printf("%d\n", sz);//48
	////二维数组的数组名也表示首元素的地址,但首元素是一个一维数组
	//printf("%p\n", arr);
	//printf("%p\n", arr + 1);//地址增加16个字节，一行

	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算行
	//printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//计算列

	//三子棋
	srand((unsigned int)time(NULL));
	int input;
	do {
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}