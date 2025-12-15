#include <stdio.h>
//int main()
//{
	//int* p;//p没有初始化，指向一个随机地址
	//*p = 10;//非法访问内存   p就是野指针

	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i <= 10; i++)//数组越界访问
	//{
	//	*p = i;
	//	p++;
	//	printf("%d ", arr[i]);
	//}
//}

//int* test()
//{
//	int a = 10;//a是局部变量，函数结束后会被销毁
//	return &a;
//}
//
//int main()
//{
//	int* p = test();//p成为悬空指针 (野指针)
//	printf("%d\n", *p);//10
//}

//int main()
//{
	//int* p = NULL;//NULL ->0  明确是空指针
	//*p = 100;//非法访问内存
	//
	//if (p != NULL)
	//{
	//	*p = 100;
	//}
	/*如何规避野指针
		1.指针初始化
		2.小心指针越界
		3.指针指向空间释放即使置NULL
		4.避免返回局部变量的地址
		5.指针使用之前检查有效性*/
//}
#include <string.h>
//int my_strlen(char* str)
//{
//	int count=0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char*str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str-start);
//}


#define N_VALUES 5
int main()
{
	//float value[N_VALUES];
	//float* vp;
	//for (vp = &value[0]; vp < &value[N_VALUES];)
	//{
	//	*vp++=0;//*vp=0; vp++;
	//}
	//int arr[10];
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	arr[i] = 1;
	//}
	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*p++ = 1;
	//}
	//for (i = 0; i < sz; i++)
	//{
	//	*(arr + i) = 1;
	//}

	/*int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);*///9 指针相减得到的是指针和指针之间相隔的元素个数
	//指向同一个内存空间的指针相减才有意义
	/*char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);*/

	//int arr[10] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0; int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%p------%p\n", &arr[i], p + i);//arr[i]=*(p+i)
	//}




}