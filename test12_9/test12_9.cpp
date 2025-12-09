#include <stdio.h>

//void print_table(int n)
//{
//	int i = 0;
//	for(i=1;i<=n;i++)
//	{
//		int j = 0;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-4d", i,j,i * j);
//		}
//		printf("\n");
//	}
//}



int main()
{
	/*int arr[10] = {};
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	int i = 0; int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max <= arr[i])
		{
			int tem = max;
			max = arr[i];
		}
	}
	printf("最大数是:%d\n", max);*/

	/*int i = 0;
	for (i = 1; i < 10; i++)
	{
		int j = 0;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}*/

	/*int n = 0;
	scanf_s("%d", &n);
	print_table(n);*/

	//数组是一组相同类型元素的集合

	//int arr[10] = { 1,2,3 };//不完全初始化，其他元素自动初始化为0
	//int arr1[] = { 1,2,3 };//完全初始化，数组大小由初始化元素个数决定
	//char ch1[10] = { 'a','b','c' };//字符数组 a b c 0 0 0 0 0 0 0
	//char ch2[10] = "abc" ;//字符数组 a b c \0 0 0 0 0 0 0
	//char ch3[] = "abc";//字符数组 a b c \0 数组大小由初始化元素个数决定
	//[]下标引用操作符

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组名表示数组首元素地址,数组元素在内存中是连续存储的
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < 10; i++)
	//{
	//	printf("arr[%d]=%p\n", i, arr+i);
	//}





	return 0;
}