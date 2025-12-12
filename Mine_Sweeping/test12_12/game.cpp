#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0; int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------扫雷--------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷--------\n");
}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int  x, int y)
{
	return (board[x - 1][y] + board[x - 1][y - 1] + board[x][y - 1] +
		board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] +
		board[x][y + 1] + board[x - 1][y + 1]-8*'0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0; int y = 0;
    int win = 0;
    while (win < row * col - EASY_COUNT)
    {
        printf("请输入要排查的坐标:>");
        // 检查输入有效性
        if (scanf_s("%d%d", &x, &y) != 2)
        {
            printf("输入格式错误，请输入数字！\n");
            while (getchar() != '\n');
            continue;
        }
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (mine[x][y] == '1')
            {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, ROW, COL);
                break;
            }
            else
            {
                // 仅首次排查时计数
                if (show[x][y] == '*')
                {
                    win++;
                    int count = get_mine_count(mine, x, y);
                    show[x][y] = count + '0';
                    DisplayBoard(show, ROW, COL);
                }
                else
                {
                    printf("该坐标已排查过，请重新输入\n");
                }
            }
        }
        else {
            printf("输入坐标不合法,请重新输入\n");
        }
    }
    if (win == row * col - EASY_COUNT)
    {
        printf("恭喜你，排雷成功\n");
        DisplayBoard(mine, ROW, COL);
    }
}
	
