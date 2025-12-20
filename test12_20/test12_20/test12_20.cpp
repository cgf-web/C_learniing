#include <stdio.h>

//void print(int* p, int sz)
//{
//	int i = 0; 
//	for (i = 0; i < sz; i++)
//	printf("%d\n", * (p + i));
//}
	
//int main()
//{
	//int arr[5];//arr整型数组
	//int* parr[10];//parr整形指针数组
	//int (*parr2)[10];//parr2数组指针
	//int (*parr3[10])[5];//parr3是存放数组指针的数组

	//int arr[10] = { 1,2,3,4,5,6,7,8,9 }; 
	//int* p = arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);//一级指针p，传给函数
	//print(p,sz);
	//return 0;

	//test(int** p)//形参是二级指针,实参可以是什么？
	//{}
	//int *p1;
	//int** p2;
	//int* arr[10];//指针数组    数组里存的是int *的元素，即指向int类型的指针
	//test(&p1);
	//test(p2); 
	//test(arr);数组名传过去是首元素的地址，即是第一个指向int类型的指针，还需再进一步解引用
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//函数指针--指向函数的指针就是函数指针
//	//数组指针--指向数组的指针
//
//	int arr[5] = { 0 };
//	int (*p)[5] = &arr;//(*p)是个指向数组的指针，  数组是有5个int类型的元素
//
//	//&函数名--取出的就是函数的地址
//	printf("%d\n", &add);
//	printf("%d\n", add);//两个一样
//
//	int (*pf)(int, int) = &add;//(*pf)是个指针   指向函数  这个函数参数是两个int类型的  返回值也是int类型的
//
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	//printf("%d\n", *pa);
//
//	int ret = (*pf)(2, 3);
//	int ret = (pf)(2, 3);
//	int ret = pf(2, 3);
//
//	printf("%d\n", ret);
//}

int Add(int x, int y)
{
	return x + y;
}

void calc(int(*pf)(int, int))
{
	int a = 3;
	int b = 5;
	int ret = (pf(a, b));
	printf("%d\n",ret);
}
int main()
{
	calc(Add);
	
	return 0;
}
