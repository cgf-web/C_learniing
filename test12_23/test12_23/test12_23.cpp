#include <stdio.h>

//void bubble_sort(int* str, int sz)
//{
//	int i = 0; int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(str + j) > *(str + j + 1))
//			{
//				int tmp = *(str + j);
//				*(str + j) = *(str + j + 1);
//				*(str + j + 1) = tmp;
//			}
//		}
//	}
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
	/*int a = 10;
	int* pa = &a;
	printf("%d\n", *pa = 20);*/

	/*数组名:
	数组名在大部分情况下表示:数组首元素的地址
	但是有2个例外，下面两个数组名表示整个数组
	1.sizeof(数组名) 
	2. & 数组名  */

	//指针数组
	//int b, c;
	//int* arr1[3] = { &a,&b,&c };

	//数组指针
	//int arr[10] = { 1,2,3 };
	//int (*parr)[10] = &arr;

	//printf("%p\n", &Add);
	//int (*pf)(int, int) = Add;//函数指针
	//printf("%d\n", pf(3, 5));

	//存放函数指针的数组
	//int (*pfArr[4])(int,int)  

	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}*/
#include <string.h>
//int main()
//{
	//指针+结构体+动态内存管理
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a)); //16
	////sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
	//
	//printf("%d\n", sizeof(a + 0));//注意和上面完全不一样   首元素地址  平台有关4/8
	//printf("%d\n", sizeof(*a));//4  解引用  得到首元素 1 整型 占四个字节
	//printf("%d\n", sizeof(a + 1));//4/8  第二个元素的地址   
	//printf("%d\n", sizeof(a[1]));//4   第二个元素 2 所占字节大小
	//printf("%d\n", sizeof(&a));//4/8   数组名再取地址  二级指针  还是地址

	//printf("%d\n", sizeof(*&a));//16  *和&抵消 相当于sizeof(数组名) 整个数组所有元素所占字节大小
	////&a --> int (*)[4]   数组指针：指向整型数组的数组指针   解引用 访问整个数组

	//printf("%d\n", sizeof(&a + 1));//4/8  地址跳过一整个数组 但终究还是个地址
	////&a --> int (*)[4]  数组指针

	//printf("%d\n", sizeof(&a[0])); //4/8  a[0] 找到第一个元素  再& 首元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  第二个元素都的地址

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n",sizeof(arr));//6 sizeof(数组名) 整个数组所有元素所占字节大小
	//printf("%d\n",sizeof(arr + 0));//4/8  首元素地址 
	//printf("%d\n",sizeof(*arr));//1  首元素  'a' 占一个字节
	//printf("%d\n",sizeof(arr[1]));//1  <==> *（arr+1） 第二个元素 所占字节大小
	//printf("%d\n",sizeof(&arr));//4/8  
	////数组的的地址
	//printf("%d\n",sizeof(&arr + 1));//4/8   指针跳过整个数组

	//printf("%d\n",sizeof(&arr[0] + 1));//4/8  第二个元素的地址

	//strlen(const char *)
	//char arr[] = { 'a','b','c','d','e','f' };后面没有'\0'
	//printf("%d\n",strlen(arr));//随机值  '\0'之前的字符个数
	//printf("%d\n",strlen(arr + 0)); //和上面一样 随机值
	//printf("%d\n",strlen(*arr));//strlen的参数是接收一个地址  strlen('a')=strlen(97)  野指针
	//printf("%d\n",strlen(arr[1])); //strlen('b')=strlen(98)  野指针
	//printf("%d\n",strlen(&arr));//随机值  &arr 指向6个字符的数组的指针 char (*)[6]和const char *不匹配
	//printf("%d\n",strlen(&arr + 1));//上面随机值-6  因为跳过了一整个数组
	//printf("%d\n",strlen(&arr[0] + 1));//随机值  从'b'开始数


	//虚拟地址--->物理地址   安全
//}

int main()
{
	//char arr[] = "abcdef";//内容明确  字符串 后面有'\0'
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n",sizeof(arr + 0));//4/8   首元素地址
	//printf("%d\n",sizeof(*arr)); //1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n",sizeof(&arr));//4/8   数组指针
	//printf("%d\n",sizeof(&arr + 1));//4/8
	//printf("%d\n",sizeof(&arr[0]+ 1));//4/8  b的地址


	//strlen是求字符串长度的，关注的是字符串中的\0，计算的是\0之前出现的字符的个数
	// strlen是库函数，只针对字符串
	// sizeof只关注占用内存空间的大小，不在乎内存中放的是什么
	// sizeof是操作符

	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n",strlen(arr + 0));//6
	//printf("%d\n",strlen(*arr)); //err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n",strlen(&arr));//数组指针 char (*)[7] 与 const char *不匹配 
	//printf("%d\n",strlen(&arr + 1));//同上  跳过整个数组
	//printf("%d\n",strlen(&arr[0]+ 1));//4*8  'b'处的地址

	//strlen(const char *)

	//const char* p = "abcdef";//首字符a的地址赋值给p
	//printf("%d\n", sizeof(p)); //4/8
	//printf("%d\n", sizeof(p + 1)); //4/8
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4/8  二级指针
	//printf("%d\n", sizeof(&p + 1)); //4/8  
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 b的地址
	//printf("%d\n", strlen(p)); //6
	//printf("%d\n",strlen(p + 1));//5
	//printf("%d\n",strlen(*p));//err  strlen('a') 
	//printf("%d\n",strlen(p[0]));//err
	//printf("%d\n",strlen(&p));//随机 err
	//printf("%d\n",strlen(&p +1));//同上
	//printf("%d\n",strlen(&p[0] + 1));//5 从b开始
}