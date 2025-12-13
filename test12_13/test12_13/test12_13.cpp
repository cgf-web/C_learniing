#include <stdio.h>

//a  97    A   65
//int main()
//{
//	char ch = 0;
//	while (scanf_s("%c", &ch)!=EOF)//scanf读取成功时，返回的是读取的数据的个数.读取失败返回EOF
//	{	
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if(ch>='A'&&ch<='Z')
//			printf("%c\n", ch + 32);
//	}
//	return 0;   
//}

//int main()
//{
//	char ch = 0;
//	while (scanf_s("%c", &ch)!=EOF)    //%c前面加空格，可以忽略回车换行符等空白字符
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("%c is an alphabet\n",ch);
//		else /*if(ch<'a'||ch>'z'||ch<'A'||ch>'Z')*/
//			printf("%c is not an alphabet\n", ch);
//		getchar();//处理回车换行符
//	}
//}

//int main()
//{
//	int arr[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int i = 0;int max = arr[0];
//	for (i = 0; i < 3; i++)
//	{		
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//}

//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int ge = i % 10;
//		int shi = i / 10 % 10;
//		int bai = i / 100 % 10;
//		int qian = i / 1000 % 10;
//		int wan = i / 10000;
//		if (((ge * (wan * 1000 + qian * 100 + bai * 10 + shi)) 
//			+ (wan * 100 + qian * 10 + bai) * (shi * 10 + ge) +
//			(wan * 10 + qian) * (bai * 100 + shi * 10 + ge) +
//			wan * (qian * 1000 + bai * 100 + shi * 10 + ge)) == i)
//			printf("%d\n", i);
//	}
//}

#include <math.h>
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 1; j <= 4; j++)
		{
			sum += (i / (int)pow(10, j)) * (i % (int )(pow(10, j)));
		}
		if(i==sum)
		printf("%d\n", i);
	}	
}



