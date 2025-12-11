#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//字符串逆序
//int main()
//{
//	char arr[] = "abcdef";//sizeof(arr) = 7(包含\0)  strlen(arr) = 6
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0; int right = sz - 2;//int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++; right--;	
//	}
//	printf("%s\n", arr);
//}

//void reverse(char* arr)
//{
//	int left = 0; int right = 0;
//	while (arr[right] != '\0')
//	{
//		right++;
//	}
//	right--;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++; right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";//sizeof(arr) = 7(包含\0)  strlen(arr) = 6
//	reverse(arr);
//	printf("%s\n", arr);
//}

//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(strlen(str+1)>=2)
//	reverse(str + 1);
//	*(str + len - 1) = tmp;
//}

//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//}

//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp; 
//	if(left<=right)
//	reverse(arr, left + 1, right - 1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0; int right = strlen(arr) - 1;
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//}

//int  DigitSum(int n)
//{
//	if (n > 9)
//	return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf_s("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//}

  
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return Pow(n, k - 1) * n;
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k); 
//}
//
//int main()
//{
//	int n = 0; int k = 0;
//	scanf_s("%d%d", &n, &k);
//	double ret = Pow(n,k);
//	printf("%.3lf\n", ret);
//}

//int main()
//{
	//int numn = 10;
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(int[10]));//数组也有类型	

	//char str[] = "hello bit";
	//printf("%d %d\n", sizeof(str), strlen(str));//10 9
	//sizeof是一个操作符，计算数组所占内存空间大小,单位是字节，从数组定义时的地址开始，计算整个数组所占内存空间大小，包括\0
	// strlen是库函数，计算字符串长度，不包含\0，从给定的地址开始向后一直找\0，统计字符个数

	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,4,6,8,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("arr1[]:");
	for (i = 0;i < sz; i++ )
	{
		printf("%d ", arr1[i]);		
	}
	printf("\n");
	printf("arr2[]:");
	for (i = 0;i < sz; i++ )
	{
		printf("%d ", arr2[i]);		
	}*/
//	return 0;
//}
//void  init(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}	
//}
//
//void reverse(int* arr, int sz)
//{
//	int left=0;
//	int right = sz - 1;
//	while (left < right)  
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++; right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	reverse(arr, sz);
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n= 0;
//	scanf_s("%d", &n);
//	int m=fib(n);
//	printf("%d\n", m);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf_s("%d\n", &n);
//	int arr[50] = {0};
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	printf("请输入要删除的元素:");
//	int x = 0; int j = 0;
//	scanf_s("%d", &x);
//	for (i = 0; i < n;i++)
//	{
//			if (arr[i] != x)
//			{
//				arr[j++] = arr[i];
//			}			
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0; int i = 0;
//	scanf_s("%d", &n);
//	int arr[10] = {0}; 
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int max = arr[0]; int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("差值为:%d\n", max - min);
//}

int main()
{
	int n = 0; int i = 0;
	int max = 0; int min = 100;
	scanf_s("%d", &n);
	int arr[10] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] > max)max = arr[i];
		if (arr[i] < min)min = arr[i];
	}
	printf("差值为:%d\n", max - min);
}