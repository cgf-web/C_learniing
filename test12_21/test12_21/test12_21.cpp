#include <stdio.h>

int test(const char* str)
{
	printf("test()\n");
	return 0;
}

int main()
{
	//指针数组
	int* arr[4];
	char* ch[5];
	//数组指针
	int arr2[5];
	int (*pa)[5] = &arr2;//数组名取地址  是个二级指针级别   首先是指针(*pa)  指向的数组是[5]个int类型的元素
	char* arr3[6];
	char* (*p)[6] = &arr3;//数组名取地址，二级指针级别  需要用指针接收(*p) 指向的数组是[6]个char*类型

	//函数指针  是指向函数的指针
	printf("%p\n", test);
	printf("%p\n", &test);
	int (*pf)(const char* str) = test;
	(*pf)("abc");
	pf("abc");


}