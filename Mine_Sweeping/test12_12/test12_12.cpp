#include "game.h"

void menu()
{
    printf("***************\n");
    printf("****1.开始游戏****\n");
    printf("****0.退出游戏****\n");
    printf("***************\n");
}

void game() 
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
    char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');

	Setmine(mine, ROW, COL);
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);
    FindMine(mine, show, ROW, COL);
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>");
        // 检查输入有效性
        if (scanf_s("%d", &input) != 1)
        {
            printf("输入格式错误，请输入数字！\n");
            while (getchar() != '\n');
            input = -1;
            continue;
        }
        switch (input)
        {
        case 0:
            printf("退出游戏\n");
            break;
        case 1:
            game();
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);

    return 0;
}