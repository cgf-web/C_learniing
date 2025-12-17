#include <stdio.h>
//int main()
//{ 
//	int a, b, c; 
//	a = 5;
//	c = ++a;//c=6 a=6
//	b=++c,c++,++a, a++;//c=8 b=7 a=8   ,表达式优先级最低
//	b += a++ + c;//a+c a++ b=b+(16)   b=23  a=9  c=8   +=优先级低
//	printf("a=%d b =%d c = %d\n", a, b, c); //a=9  b=23 c=8
//	return 0;
//}

//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int count_num_of_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}

//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d",&num);
//	int n=count_num_of_1(num);
//	printf("%d\n", n);
//}

//int count_diff_bit(int m, int n)
//{
//	int i = 0; int count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}

//int main()
//{
//	int n=0,m=0;
//	scanf_s("%d%d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//}

//int main()
//{
//	int i = 0; int num = 0;
//	scanf_s("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));//奇数位
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", ((num >> i) & 1));//偶数位
//	}
//}
// 
// 
//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，不初始化，默认随机值   放在栈区
	
//int i; 
//int main()
//{
	//i--;
	////sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
	////有符号数和无符号数比较     int 转换  unsigned int 
	//if (i > sizeof(i))//-1>4  (i=-1)算术转换 -1会变成很大的整数  
	//	printf(">\n");//>
	//else
	//	printf("<\n");
//	int n = 0;
//	while (scanf_s("%d", &n) == 1)
//	{
//		int i = 0; int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}				
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}				
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//		return 0;
//}
#include <string.h>
int is_leap_year(int y)
{
	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	while (scanf_s("%d%d", &y, &m)==2);
	{
		int d = days[m];
		if (is_leap_year(y) == 1&&(m==2))
		{
			d++;
		}
		printf("%d\n", d);
		getchar();
	}
}