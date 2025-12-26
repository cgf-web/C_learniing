#include <stdio.h>
#include  <string.h>
#include <assert.h>

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest=(char*)dest+1;
//		src = (char*)src + 1;	
//	}
//	return dest;
//}
//void test1()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}

//void test2()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	//my_memcpy(arr1+2, arr1, 20);//内存空间有重叠    memcpy不能处理重叠区域内存拷贝  需要使用memmove
//	//memmove(arr1 + 2, arr1, 20);
//	memcpy(arr1 + 2, arr1, 20);//在visual studio中  memcpy可以处理重叠区域内存拷贝
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前向后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;		
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//void test3()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//my_memmove(arr1+2, arr1, 20);
//	my_memmove(arr1 , arr1+2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//
//int main()
//{
//	//句柄  就是所指向的某个对象的地址
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	/*my_memcpy(arr2,arr1,20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}*/
//	//test2();
//	test3();
//
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 1,3,2 };
	int ret=memcmp(arr1, arr2, 12);//一个字节一个字节的比较
	printf("%d\n", ret);//-1   

	//memset  --> memory set   内存初始化函数
	// void *memset(void* ptr,int value,size_t num)  
	//向ptr指向的内存块 的前num个字节设置为value值
	//char arr[] = "hello bit";
	//memset(arr, 'x', 5);
	//memset(arr + 6, 'y', 3);
	//printf("%s\n", arr);//xxxxx yyy

	int arr[10] = { 0 };
	memset(arr, 1, 40);//以字节为单位初始化内容   不能将每个整型都改为1
	//01 01 01 01.......
	int i = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);		
	}

	return 0;
}