#include <stdio.h>
int main()
{
	/*int a = 10;
	int* pa = &a;

	char* pc = NULL;
	short* ps = NULL;
	int* pi = NULL;
	double* pd = NULL;
	printf("%zu\n", sizeof(pc));
	printf("%zu\n", sizeof(ps));
	printf("%zu\n", sizeof(pi));
	printf("%zu\n", sizeof(pd));*/

	/*int a = 0x11223344;
	int* pa = &a;
	*pa = 0;
	char* pc = (char*)&a;
	*pc = 0;*/
	//指针类型决定了指针在被解引用的时候访问几个字节
	//int *,解引用访问4个字节
	//char *,解引用访问1个字节

	/*int a = 0x11223344;
	int * pa=&a;
	char* pc = (char *) & a;
	printf("pa=%p\n", pa);
	printf("pa+1=%p\n", pa+1);
	printf("pc=%p\n", pc);
	printf("pc+1=%p\n", pc+1);*/



	return 0;
}
//指针 指针变量，存放的是地址，通过这个地址，就能找到内存单元
//指针的大小在32位机器上是4字节，在8位机器上是8字节