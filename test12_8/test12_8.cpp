#include <stdio.h>

void swap(int* x, int* y)
{
	if (*x < *y)
	{
		int tem = *x; *x = *y; *y = tem;
	}
}

int main()
{
	int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	if (i = 5)
	//	{
	//		printf("%d ", i);//无限循环的打印5
	//	}
	//}
	/*int a = 0; int b = 0; int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	int tem;
	if (a < b)
	{
		swap(&a, &b);
	}
	if (a < c)
	{
		swap(&a, &c);
	}
	if (b < c)
	{
		swap(&b, &c);
	}
	printf("%d > %d > %d\n", a, b, c);*/

	/*for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}*/
	/*for (i = 3; i <= 100; i+=3)
	{
		printf("%d ", i);
	}*/

	/*int a = 0; int b = 0;暴力求两数公约数
	scanf_s("%d %d", &a, &b);
	int min=(a < b) ? a : b;
	while (1)
	{
		if (a % min == 0 && b % min == 0)
		{
			break;
		}
		min--;
	}
	printf("%d\n", min);*/
	//辗转相除法求两数公约数
	/*int a = 0; int b = 0;
	scanf_s("%d %d", &a, &b);
	while (a % b)
	{
		int tem = a % b;
		a = b;
		b = tem;
	}
	printf("%d\n", b);*/

	//continue会跳过本次循环的代码
	
	//int count=0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9)//个位数是9的个数
	//	{
	//		count++;
	//	}
	//	if(i/10 == 9)//十位数是9的个数
	//	{
	//		count++;
	//	}
	//}
	//printf("count=%d\n", count);

	/*double sum = 0; int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*(1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);*/
	return 0;
}