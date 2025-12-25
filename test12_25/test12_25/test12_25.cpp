
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>




//int main()
//{
//	//C语言的库函数，在执行失败的时候，都会设置错误码
//	//0 1 2 3 4 5 6 7 8
//
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));*/
//	
//	//error code 2 means "No such file or directory"
//	//errno --c语言设置的一个全局变量，保存了最近一次错误的错误码
//	
//	//FILE* fp=fopen("test.txt", "r");//相对路径当前工作目录
//	//if (fp == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//	//}
//
//	//printf("%c\n", tolower('W'));
//
//	//int a = isspace(' ');
//	//printf("%d\n", a);//8
//
//	int a = isdigit('x');
//	printf("%d\n", a);//0 不是数字
//
//	//memcpy  内存拷贝函数
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	int arr2[10] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));//可以拷贝任意类型数据  内存中的
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);	//1 2 3 4 5 6 7 8 0 0
//	}
//}
#include <assert.h>


void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;//char* 最细 一次加一字节  拷28个字节
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}


int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	//my_memcpy(arr2, arr1,28 );
	my_memcpy(arr1 + 2, arr1, 16);//重叠区域拷贝会出问题  拷贝两块独空间中的数据
	//重叠区域拷贝  应该使用memmove
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);	//1 2 3 4 5 6 7 8 0 0
	}
	return 0;
}