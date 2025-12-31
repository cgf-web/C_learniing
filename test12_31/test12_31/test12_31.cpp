#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
//void swap(int *a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//	printf("a=%d,b=%d\n", *a, *b);
//}

//typedef struct point
//{
//	int x;
//	int y;
//}po;
//
//struct point creatpoint(int x, int y)
//{
//	struct point temp;
//	temp.x = x;
//	temp.y = y;
//	return temp;
//}
//
//
//int main()
//{
	/*char str[12];
	strcpy_s(str ,"Hello World");
	printf("%s\n", str);*/

	/*int m = 5;
	int	n = 10;
	swap(&m, &n);
	printf("m=%d,n=%d\n", m, n);*/

	//int a[] = { 15,22,67,43,87 };
	//int* p;
	//p = a;
	//printf("%p\n", a);
	//printf("%p\n", p);
	//printf("%d\n", *p);

	/*int a = 5;
	int* p = &a;
	printf("%p\n", p);
	p++;
	printf("%p\n", p);*/
	/*struct point p;
	p = creatpoint(5, 10);

	printf("%d\n", p.x);
	printf("%d\n", p.y);*/

	/*struct point p;
	p.x = 5;
	p.y = 10;
	struct point* pp;
	pp = &p;
	(*pp).x = 10;
	(*pp).y= 5;
	printf("x=%d,y=%d\n", p.x,p.y);
	printf("x=%d,y=%d\n", pp->x,pp->y);*/

	/*po p;
	p.x = 5;
	p.y = 10;
	printf("%d\n", p.x);
	printf("%d\n", p.y);*/

	//C 程序编译后，会以三种形式使用内存 : 
	// 1.静态 / 全局内存静态声明的变量和全局变量使用这部分内存，这些变量在程序开始运行时分配，直到程序终才消失。
	//2.自动内存(栈内存)
	//函数内部声明的变量使用这部分内存，在函数被调用时才创建，
	//3.动态内存(堆内存)
	//根据需求编写代码动态分配内存，可以编写代码释放，内存中的内容直到释放才消失。

	//size of是个操作符，它的返回值就是size_t类型，它是无符号整型。

	/*C语言中，动态分配内存的基本步骤
	* 1.使用malloc()或calloc()函数分配内存
	void* malloc(size_t)   
	成功，返回 从堆内存分配的内存指针
	失败，返回NULL
	2.使用分配的内存
	3.使用free()函数释放内存

	*/
//}

//int main()
//{
//	int* p;
//	p = (int*)malloc(sizeof(int));
//	*p = 10;
//	printf("%d\n", *p);
//	free(p);//重要
//	return 0;
//	//栈中  释放的是程序自动分配和释放的  ，堆中 是程序员手动分配和释放
//}

//int mian()
//{
//	char* s;
//	s = (char*)malloc(10);
//	strcpy(s, "Hello");
//	printf("%s\n", s);
//}

//int main()
//{
//	int* arr = (int*)malloc(5 * sizeof(int));
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = 0;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//typedef struct
//{
//	int x;
//	int y;
//}po;
//
//int mian()
//{
//	po* p;
//	p = (po*)malloc(sizeof(po));
//	p->x = 5;
//	p -> y = 10;
//	printf("%d\n", p->x);
//	printf("%d\n", p->y);
//}


//benchmark sort 排序世界级比赛


