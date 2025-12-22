#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//typedef void(*pf_t)(int);//定义函数指针类型pf_t，指向参数为int，返回值为void的函数
//							//void(*)(int)类型重命名为	pf_t
//int main()
//{
//	(*(void (*)())0)();
//	//void(*p)()  p是函数指针
//	//0是int型   （void *）强制类型转换
//	//无参数
//	//0地址强制转换为函数指针类型，再解引用，得到函数，再调用函数
//
//	//void（* signal(int, void(*)(int)) ）(int);
//	//signal是一个函数，参数是int和函数指针，返回值是函数指针void(*) (int)
//	pf_t signal(int, pf_t);
//
//	return 0;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("***1.add********2.sub*****\n");
//	printf("***3.mul********4.div*****\n");
//	printf("***0.exit*****************\n");
//	printf("**************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*pf)(int, int))
//{
//	int ret = 0;
//	int x = 0; int y = 0;
//	printf("请输入两个操作数:>");
//	scanf_s("%d%d", &x, &y);
//	ret = (*pf)(x, y);//通过函数指针调用函数
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{			
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			exit(0);
//			break;
//		default:
//			printf("选择错误\n");	
//			break;
//		}
//	} while (input);
//	return 0;
//}


//函数指针数组
//函数指针也是指针，把函数指针存放在数组中就是函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;//pf是函数指针
//	int (*arr[4] )(int, int) = {Add,Sub,Mul,Div};//arr就是函数指针数组
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n",arr[i](8, 4));
//	}
//}


//void menu()
//{
//	printf("**************************\n");
//	printf("***1.add********2.sub*****\n");
//	printf("***3.mul********4.div*****\n");
//	printf("***0.exit*****************\n");
//	printf("**************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0; int y = 0;
//	int ret = 0;
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//函数指针数组，减少代码量,扩展性更好
////数组类型：pfArr是一个数组，长度为 5，数组中每个元素的类型是「指向 “接收 2 个 int、返回 int” 的函数的指针」；
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			exit(0);
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf_s("%d%d", &x, &y);
//			int ret=pfArr[input](x, y);//转移表  
//			//通过下标（用户输入的input）直接 “转移” 到对应的函数，无需逐个判断case，本质是 “下标→函数” 的映射表。 
//			printf("%d\n", ret);	
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
	//函数指针数组
	//int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };

	//指向函数指针数字组的指针
	//int(*(*ppfArr)[5])(int,int) = &pfArr;

	//回调函数-->就是一个通过函数指针调用的函数
	//把一个函数的指针（地址）作为参数传递给另外一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数
	//回调函数不是有该函数的实现方直接调用，而是在特定的事件或条件发生时有另外的一方调用的，用于对该事件或条件进行响应	 
//}

//冒泡排序 
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0; int j = 0; int flag = 1;//假设是已经排好序的 
//	for (i = 0; i < sz-1; i++)//10个元素  排9轮
//	{
//		for (j = 0; j < sz - 1 - i; j++)//每一轮比较次数
//		{
//			if (arr[j] >= arr[j + 1])//升序排列
//			{
//				int temp = arr[j];//交换
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//升序排列
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	printf("升序后:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//qsort函数    可以排序任意类型的数据
//void qsort(void* base,//排序的数据的起始位置
	//size_t num,//代排序的数据元素个数
	//size_t width,//待排序的数据元素的大小 单位是（字节）
	//int(*compare)(const void* eleml, const void* elem2));//第四个参数是函数指针 

//比较两个整型元素
int cmp_int(const void* e1, const void* e2)//void *的指针不能直接解引用操作，也不能+-整数
//void* 是无具体类型的指针  可以接受任意类型的地址
{
	return (* (int*)e1 - *(int*)e2);
}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	//strcmp    -->结果刚好是  >0  ==0  <0
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//}
//
//void test2()
//{
//	//qsort排序结构体数据
//	struct Stu s[] = { {"zhangsan",15} ,{"lisi",30} ,{"wangwu",25} };
//	//qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_by_name);
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_by_age);
//}
//
//int main()
//{
//	test2();
//}

void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++; buf2++;
	}

}

//冒泡排序
void bubble_sort(void *base,int sz,int width,int(*cmp)(const void *e1,const void * e2))
{
	int i = 0; int j = 0; int flag = 1;//假设是已经排好序的 
	for (i = 0; i < sz - 1; i++)//10个元素  排9轮
	{
		for (j = 0; j < sz - 1 - i; j++)//每一轮比较次数
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
			//if (arr[j] >= arr[j + 1])//升序排列
			//{
			//	int temp = arr[j];//交换
			//	arr[j] = arr[j + 1];
			//	arr[j + 1] = temp;
			//	flag = 0;
			//}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//升序排列
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz,sizeof(arr[0]),cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}