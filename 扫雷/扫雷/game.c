#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
#include "game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------扫雷游戏-----------\n");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i=1;i<=row;i++)
	{
		printf("%d ", i);
		for (j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}

//布雷
void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % col + 1;
		int y = rand() % row + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
	DisplayBoard(board, row, col);
}

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);//x(1,9),y(1,9)
		//判断坐标合法性
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，雷炸了\n>>>>>>>>>>>游戏结束<<<<<<<<<<<\n");
				DisplayBoard(mine, ROW, COL);
				printf("\n");
				break;
			}
			//统计周围雷数
			else
			{
				int count = 0;
				for (int i = x - 1; i <= x + 1; i++)
				{
					for (int j = y - 1; j <= y + 1; j++)
					{
						count = count + mine[i][j];
					}
				}
				int count2 = count - 9 * '0';
				show[x][y] = count2 + '0';
				DisplayBoard(show, ROW, COL);

			}
		}
		else
		{
			printf("坐标不合法，请重新输入：>");
		}
	}
}