#include <stdio.h>

//1)数据类型(常用char, short, int, long, signed, unsigned, float, double，sizeof)
//2)运算和控制(= ， + ， - ，*, while, do - while, if, else, switch, case, continue, break)
//3),数据存储(static, extern，const，volatile)
//4).结构(struet，enum，union，typedef)
//5).位操作和逻辑运算(<< ， >> ，&，|，~，^)
//6).预处理(#define， #include，#if...#elif...#else...#endif等)

//位、字节、字的关系位(bit) :计算机中最基本的单位, 对应0或1
// 字节(Byte) : 计算机中数据存储的基本单位, 8位 = 1字节
//字(word) : 计算机进行数据处理和运算的单位。32位机中, 4字节 = 1字; 64位机中, 8字节 = 1字,


//char heap_buf[1024];
//int pos = 0;
//
//char* my_malloc(int size)
//{
//	int old_pos = pos;
//	pos += size;
//	return &heap_buf[old_pos];
//}
//void my_free(void* buf)
//{
//	/*err*/
//}
//void c_fun(void)
//{	
//}
//
//void b_fun(void)
//{	
//}
//
//int a_fun(int val)
//{
//	int a = 8;
//	a += val;
//	b_fun();
//	c_fun();
//	return a;
//}
//int main()
//{
//	char ch = 65;//char ch='A';
//	int i = 0;
//	char* buf = my_malloc(100);
//	unsigned char uch = 200;
//	for (i = 0; i < 26; i++)
//	{
//		buf[i] = 'A' + i;
//	}
//	a_fun(46);
//	return 0;
//}
//main -->a_fun   (LR   link register 保存函数返回地址)  存在栈中
//分配新的空闲的内存空间 --栈
//每个任务(函数)都有各自的栈,相互独立    task_A()       task_B()

int main()
{
	char* arr[5] = { 0 };//指针数组  数组可以存5个指向char类型的指针 <===>数组元素类型是char*
	char * (*pc)[5] = &arr;//数组名取地址(二级指针)  (*pc)是个指针  [5]表示pc所指向的数组是5个元素的 每个元素是char类型
	
	/*char ch = 'w';
	char* p1 = &ch;
	char** p2 = &p1;*/
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int (*p)[10] = &arr1;//10必须写     p的类型是：int(*)[10]   p是指向一个整型数组的，数组10个元素
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *((*p + i)));
		printf("%d ", arr1[i]);
	}
	return 0;
}