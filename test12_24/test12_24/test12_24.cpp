#include <stdio.h>

//int main()
//{
//	int a[3][4] = { 0 }; 
//	printf("%d\n", sizeof(a)); //48
//	printf("%d\n", sizeof(a[0][0])); //4
//
//
//	printf("%d\n", sizeof(a[0])); //16  a[0]相当于二维数组中第一行数组 的数组名
//	//a[0]是第一行这个一维数组的数组名,单独放在sizeof内部,a[0]表示第一行整个这个一维数组
//	//sizeof(a[0])计算的就是第一行的大小
//
//	printf("%d\n", sizeof(a[0] + 1)); //4/8   注意和上面区分  没有单独放在sizeof()内部
//	//这里的a[0]相当于&a[0][0],表示的是第一个元素的地址,加一表示第一行第二个元素地址
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//
//
//	//a虽然是二维数组的地址,但是并没有单独放在sizeof内部,也没取地址
//	//a表示首元素的地址,二维数组的首元素是它的第一行,a就是第一行的地址
//	//a+1就是跳过第一行,表示第二行的地址
//	printf("%d\n",sizeof(a+1));//4/8
//
//
//	printf("%d\n",sizeof(*((a + 1))));//16
//	//*(a+1)是对第二行地址的解引用,拿到的是第二行
//	//或者  *(a+1) <==>a[1]   sizeof(*(a+1)) <==>sizeof(a[1])表示的是二维数组第二行的数组名
//
//	printf("%d\n",sizeof(&a[0]+ 1));//4/8
//	//&a[0]-对第一行的数组名取地址,拿出的是第一行的地址
//	//&a[0]+1 -得到的是第二行的地址
//
//	printf("%d\n",sizeof(*(&a[0]+ 1)));//16
//
//	printf("%d\n",sizeof(*a));//16  
//	//a表示首元素的地址,就是第一行的地址
//	//*a就是对第一行地址的解引用,拿到的就是第一行
//
//	printf("%d\n",sizeof(a[3]));//16  类型确定  sizeof(a[0])效果一样
//
//	sizeof(int);//4
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 }; 
//	int* ptr = (int*)(&a + 1); //&a 取出的是整个数组地址
//
//	printf(" %d,%d",*(a+1),*(ptr - 1));//2  5
//	return 0;
//}

//struct Test
//{
//int Num;
//char* pcName;
//short sDate;
//char cha[2];
//short sBa[4];
//}*p=(struct Test *)0x100000;
////假设p 的值为0x100000。如下表表达式的值分别为多少?
////已知,结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1); //0x100014  跳过一个结构体大小
//	printf("%p\n", (unsigned long)p + 0x1);
//	//转换成unsigned long 类型   0x100000  == 1048576  +1   1048577 --> 100001
//
//	printf("%p\n", (unsigned int*)p + 0x1); 
//	//转换成了 unsigned int* 类型  加1跳过四个字节 0x100004
//	return 0;
//}

//int main()
//{ 
//	//小端存储   低位存低地址
//	int a[4] = { 1,2,3,4 }; //0x01 00 00 00  0x02 00 00 00 0x03 00 00 00 0x04 00 00 00
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1); //ptr2指向01后面 00 00 00 02
//	printf("%x,%x",ptr1[-1],* ptr2); //4,2000000  
//	return 0;
//}

//int main()
//{ 
//	int a[3][2] = { (0,1),(2,3),(4,5) }; //逗号表达式 1 3 5 0 0 0
//	//int a[3][2] = { {0,1} ,{2,3},{4,5} };上面是坑  
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 2; j++)
//	//	{
//	//		printf("%d ", a[i][j]);//1 3 5 0 0 0
//	//	}
//	//}
//	int* p; p = a[0];//a[0]表示&a[0][0]的地址
//	printf("%d", p[0]);//1
//	return 0;
//}

//int main()
//{ 
//	int a[5][5]; 
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//
//	return 0;
//}

//int main()
//{ 
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1); //&aa 跳过整个数组
//	int* ptr2 = (int*)(*(aa + 1));  //aa[1]  表示第二行整个数组地址
//	printf("%d,%d",*(ptr1 - 1), * (ptr2 - 1)); //10  5
//	return 0;
//}

//int main()
//{
//	const char* a[] = { "work","at","libaba" };//指针数组
//	const char** pa = a;//char* *pa *pa是一个指向含有三个char*类型元素的数组的指针
//	pa++; //加1跳过一个char* 
//	printf(" %s\n",*pa);//at
//	return 0;
//}

//int main()
//{ 
//	const char* c[] = { "ENTER","NEW","POINT","FIRST" }; 
//	const char** cp[] = { c + 3,c + 2,c + 1,c }; 
//	const char*** cpp = cp;
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*-- * ++cpp + 3); //ER
//	printf("%s\n",*cpp[-2]+ 3);//ST
//	printf("%s\n",cpp[-1][-1]+ 1);//EW
//	
//	return 0;
//}


