#include <stdio.h>

struct peo//声明的结构体类型peo  模板 不占用内存空间
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p2;//用结构体类型 创建的结构体变量,p2  (对象)

struct st
{
	struct peo p;
	int num;
	float f;
};

void print1(struct st* s1)
{
    // 需要完整定义 struct st 才能访问其成员
	//结构体指针->成员变量
    printf("%s %s %s %d %d %f\n", s1->p.name, s1->p.tele, s1->p.sex, s1->p.high, s1->num, s1->f);
}
void print2(struct st s1)
{
	//结构体变量.成员变量
	printf("%s %s %s %d %d %f\n", s1.p.name, s1.p.tele, s1.p.sex, s1.p.high, s1.num, s1.f);
}
int main()//
{
	//int a = 10;
	//int* pa = &a;//一级指针变量
	/**pa = 20;
	printf("%d\n", a);*/
	//int** ppa = &pa;//二级指针变量  int*是说明ppa指向的是一个int*类型的变量，*是说明ppa是一个指针变量，&是取地址符号，表示ppa存储的是pa的地址
	//**ppa = 30;
	//指针数组,存放指针的数组
	//int a = 10;
	//int b = 20;
	//int c = 30;

	//int* parr[10] = { &a,&b,&c };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(parr[i]));//10 20 30
	//}

	/*int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };

	int* parr[3] = { arr1,arr2,arr3 };
	for(i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}*/
	//结构体，   一组不同类型变量的集合
	//char short int long longlong float double    结构体 (描述复杂对象)	
	struct peo p1 = {"zhangsan","124156565","男",181};
	struct st s1 = { {"lisi","12561655","女",165},1,12.5 };
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s1.p.name, s1.p.tele, s1.p.sex, s1.p.high, s1.num, s1.f);
	print1(&s1);//传址    推荐
	print2(s1);//传参   形参拷贝一份实参，时间和空间浪费
	
	return 0;
}