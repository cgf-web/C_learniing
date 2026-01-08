#define _CRT_SECURE_NO_WARNINGS  // 关闭strerror等函数的安全警告
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

// 通讯录联系人结构体
typedef struct {
    char name[20];
    char phone[12];
    int age;
} Contact;

// 通讯录结构体
typedef struct {
    Contact* contacts;  // 动态数组存储联系人
    int size;           // 当前联系人数量
    int capacity;       // 容量
} ContactBook;

// ========== 全局作用域定义所有函数（核心修复：移出函数内部） ==========

// 比较函数（用于排序）- 移出函数内部，改为全局
int cmp_peo_by_name(const void* a, const void* b) {
    const Contact* c1 = (const Contact*)a;
    const Contact* c2 = (const Contact*)b;
    return strcmp(c1->name, c2->name);
}

// 初始化通讯录
void InitContact(ContactBook* book) {
    book->capacity = 4;
    book->size = 0;
    book->contacts = (Contact*)malloc(book->capacity * sizeof(Contact));
    if (book->contacts == NULL) {
        // 修复strerror警告：要么用strerror_s，要么加宏关闭警告
        printf("内存分配失败：%s\n", strerror(errno));
        exit(1);
    }
}

// 添加联系人
void AddContact(ContactBook* book) {
    // 扩容逻辑
    if (book->size >= book->capacity) {
        Contact* temp = (Contact*)realloc(book->contacts, book->capacity * 2 * sizeof(Contact));
        if (temp == NULL) {
            printf("扩容失败：%s\n", strerror(errno));
            return;
        }
        book->contacts = temp;
        book->capacity *= 2;
        printf("通讯录扩容至%d容量\n", book->capacity);
    }

    // 输入联系人信息
    printf("请输入姓名：");
    scanf("%s", book->contacts[book->size].name);
    printf("请输入年龄：");
    scanf("%d", &book->contacts[book->size].age);
    printf("请输入手机号：");
    scanf("%s", book->contacts[book->size].phone);

    book->size++;
    printf("添加成功！\n");
}

// 删除联系人
void DelContact(ContactBook* book) {
    if (book->size == 0) {
        printf("通讯录为空，无需删除！\n");
        return;
    }

    char delName[20];
    printf("请输入要删除的联系人姓名：");
    scanf("%s", delName);

    // 查找联系人（修复FindByName定义问题）
    int i = 0;
    for (; i < book->size; i++) {
        if (strcmp(book->contacts[i].name, delName) == 0) {
            // 后面的元素前移
            for (int j = i; j < book->size - 1; j++) {
                book->contacts[j] = book->contacts[j + 1];
            }
            book->size--;
            printf("删除成功！\n");
            return;
        }
    }
    printf("未找到该联系人！\n");
}

// 按姓名查找（改为全局，移除static，或保留static但放在全局）
// 修复：static函数只能定义在全局，不能在块内
static int FindByName(ContactBook* book, const char* name) {
    for (int i = 0; i < book->size; i++) {
        if (strcmp(book->contacts[i].name, name) == 0) {
            return i;  // 返回索引
        }
    }
    return -1;  // 未找到
}

// 修改联系人
void ModifyContact(ContactBook* book) {
    if (book->size == 0) {
        printf("通讯录为空！\n");
        return;
    }

    char modName[20];
    printf("请输入要修改的联系人姓名：");
    scanf("%s", modName);

    int idx = FindByName(book, modName);  // 修复标识符未定义
    if (idx == -1) {
        printf("未找到联系人！\n");
        return;
    }

    // 修改信息
    printf("请输入新姓名：");
    scanf("%s", book->contacts[idx].name);
    printf("请输入新年龄：");
    scanf("%d", &book->contacts[idx].age);
    printf("请输入新手机号：");
    scanf("%s", book->contacts[idx].phone);
    printf("修改成功！\n");
}

// 查找联系人（searchContact）
void searchContact(ContactBook* book) {
    if (book->size == 0) {
        printf("通讯录为空！\n");
        return;
    }

    char seaName[20];
    printf("请输入要查找的联系人姓名：");
    scanf("%s", seaName);

    int idx = FindByName(book, seaName);
    if (idx == -1) {
        printf("未找到联系人！\n");
        return;
    }

    // 显示找到的联系人
    printf("姓名：%s\t年龄：%d\t手机号：%s\n",
        book->contacts[idx].name,
        book->contacts[idx].age,
        book->contacts[idx].phone);
}

// 显示所有联系人
void ShowContact(ContactBook* book) {
    if (book->size == 0) {
        printf("通讯录为空！\n");
        return;
    }

    printf("===== 通讯录列表 =====\n");
    printf("姓名\t年龄\t手机号\n");
    for (int i = 0; i < book->size; i++) {
        printf("%s\t%d\t%s\n",
            book->contacts[i].name,
            book->contacts[i].age,
            book->contacts[i].phone);
    }
    printf("======================\n");
}

// 排序联系人
void SortContact(ContactBook* book) {
    if (book->size <= 1) {
        printf("无需排序！\n");
        return;
    }

    qsort(book->contacts, book->size, sizeof(Contact), cmp_peo_by_name);
    printf("按姓名排序完成！\n");
}

// 主函数
int main() {
    ContactBook book;
    InitContact(&book);

    int choice = 0;
    do {
        printf("\n===== 通讯录管理系统 =====\n");
        printf("1. 添加联系人\n");
        printf("2. 删除联系人\n");
        printf("3. 修改联系人\n");
        printf("4. 查找联系人\n");
        printf("5. 显示所有联系人\n");
        printf("6. 按姓名排序\n");
        printf("0. 退出\n");
        printf("请输入操作：");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            AddContact(&book);
            break;
        case 2:
            DelContact(&book);
            break;
        case 3:
            ModifyContact(&book);
            break;
        case 4:
            searchContact(&book);
            break;
        case 5:
            ShowContact(&book);
            break;
        case 6:
            SortContact(&book);
            break;
        case 0:
            printf("退出系统...\n");
            free(book.contacts);  // 释放内存
            break;
        default:
            printf("输入错误，请重新选择！\n");
            break;
        }
    } while (choice != 0);

    return 0;
}