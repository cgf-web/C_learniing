#include <stdio.h>
#include <math.h>

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	while (n)
//	{
//		int bit = n % 10;
//		if (bit % 2 == 1)//奇数
//		{
//			bit = 1;
//		}
//		else
//		{	
//			bit = 0;
//		}
//		sum += bit * pow(10, i);
//		i++;
//	n /= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n)==1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i + j<n-1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//}

//int main()
//{
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf_s("%lf %d %d %d", &price, &m, &d, &flag);
//	
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7-flag*50;		
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8-flag*50;
//	}
//
//	if (price < 0.0)
//	{
//		printf("%.2lf\n", price);
//	}
//}

//int main()
//{
//	//char -128~127
//	//unsigned char 0~255
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	//整型提升
//	printf("%d %d", a + b, c);//300 44
//	return 0;
//}

int main()
{
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	printf("%x\n", b);
return 0; 
}