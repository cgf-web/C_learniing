#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//栈区：局部变量，形式参数   程序结束自动回收内存空间
//堆区：malloc calloc  realloc  程序员手动可控   
//静态区

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = (int*)malloc(40);//不初始化
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//错误
//	//int a = 10;
//	//int* p = &a;
//	//free(p);
//	//p = NULL;
//	//int* p = NULL;
//	//free(p);
//
//	int *p=(int*)calloc(10, sizeof(int));//初始化为0，返回开辟的空间的首地址
//	//calloc==malloc+memset
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	int* ptr=(int *)realloc(p, 80);//在原来40个字节的基础上增加了40个字节
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
}
