//#include <iostream>
//using namespace std;
//class TestClass
//{
//public:
//    TestClass() : m_ver(0) {}
//    virtual void v_func() {}
//    void func() {}
//private:
//    int m_ver;
//    char m_ver1[13];
//    static int s_ver;
//};
//int TestClass::s_ver = 0;
//
//int main()
//{
//    TestClass* obj = new TestClass();
//    cout << sizeof(*obj);
//    delete obj;
//    return 0;
//}

//#include <stdlib.h>
//
//// 节点结构体定义
//struct node {
//    int data;
//    struct node* next;
//};
//
//struct node* del(struct node* head, int num) {
//    // 情况1：空链表
//    if (head == NULL) {
//        return NULL;
//    }
//
//    struct node* curr = head;
//    // 情况2：头节点是目标节点
//    if (curr->data == num) {
//        head = curr->next;
//        free(curr);
//        return head;
//    }
//
//    // 情况3：遍历找目标节点（中间/尾节点）
//    struct node* prev = NULL;
//    while (curr != NULL && curr->data != num) {
//        prev = curr;
//        curr = curr->next;
//    }
//
//    // 若找到目标节点
//    if (curr != NULL) {
//        prev->next = curr->next;
//        free(curr);
//    }
//    return head;
//}

//void rotate(int** matrix, int matrixSize, int* matrixColSize) {
//    int n = matrixSize;
//    // 步骤1：矩阵转置
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            int temp = matrix[i][j];
//            matrix[i][j] = matrix[j][i];
//            matrix[j][i] = temp;
//        }
//    }
//
//    // 步骤2：反转每一行
//    for (int i = 0; i < n; i++) {
//        int left = 0, right = n - 1;
//        while (left < right) {
//            int temp = matrix[i][left];
//            matrix[i][left] = matrix[i][right];
//            matrix[i][right] = temp;
//            left++;
//            right--;
//        }
//    }
//}

//#include <stdio.h>
//#include <string.h>
//void Func(char str_arg[100])
//{
//	printf("%d\n", sizeof(str_arg));
//}
//int main(void)
//{
//	char str[] = "Hello";
//	printf("%d\n",sizeof(str)); //6
//	printf("%d\n",strlen(str));//5
//	char* p = str;
//	printf("%d\n", sizeof(p));//4 or 8
//	Func(str); //4 or 8
//}