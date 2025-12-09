#include <stdio.h>
#include <math.h>
//static修饰全局变量的时候这个全局变量的外部链接属性就变成了内部链接属性。
//其他源文件(.c)就不能再使用到这个全局变量了。从原工程都可用变成了本源文件可用
//函数同理
void test()
{
	static int a = 1; //static 修饰局部变量时，局部变量出了作用域不会销毁
	//本质上是改变了变量的存储位置，从栈区变成了全局区，生命周期变长，和程序的生命周期一样长
	a++;
	//printf("%d ",a);
}
	
typedef struct Student
{
	char name[20];
	int age;
	float score;
}Student;

void print(Student* s)
{
	printf("%s %d %.2f", s->name, s->age, s->score);
}

//形参是实参的一份临时拷贝 
void swap(int* a, int* b)//形参，不会开辟空间。函数调用完就自动销毁了
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int add (int* a, int* b)
{
	return *a + *b;
}

int is_prime(int n)
{
	int j = 0; 
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	//int i = 0;//向内存申请4个字节空间，存放在栈区
	/*while (i < 10)
	{
		test();
		i++;
	}
	printf("%p",&i);
	*/
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float *));
	printf("%d\n", sizeof(double*));*/
	//指针变量的大小取决于地址的大小
	//32位平台下地址是32个bit位(即4个字节)
	//64位平台下地址是64个bit位(即8个字节)
	Student stu1 = { "zhangsan",12,92.5 };
	//结构体对象.成员名     结构体指针变量->成员名	
	//printf("%s %d %.2f", stu1.name, stu1.age, stu1.score);
	//print(&stu1);

	//int x = 0; int y = 0;
	//scanf_s("%d %d", &x, &y);
	///*int* pa = &a;
	//int* pb = &b;*/
	//printf("交换前：");
	//printf("%d %d\n", x, y);
	//swap(&x, &y);
	//printf("交换后:");
	//printf("%d %d\n", x, y);
	//printf("%d\n",add(&x, &y));

	//int i = 0;  int count = 0;
	//for (i = 101; i <= 200; i+=2)
	//{
	//	int j = 0;int flag = 1;
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			flag = 0;//只要有能整除的就不是素数
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		count++;
	//		printf("%d是一个素数\n",i);			
	//	}	
	//}
	//printf("%d个\n", count);

	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d是一个素数\n",i);	
			count++;
		}		

	}
	printf("一共%d个\n", count);
	return 0;
}