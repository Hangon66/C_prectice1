#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("************1.play***********\n");
	printf("************0.exit***********\n");
	printf("*****************************\n");
}

void game()
{
	//创建棋盘
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayMove(board, ROW, COL);
		Determine(board, ROW, COL);
		BotMove(board, ROW, COL);
		Determine(board, ROW, COL);
	}
}

int main()
{
	int x1 = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：》\n");
		scanf("%d", &x1);
		switch (x1)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (x1);
}