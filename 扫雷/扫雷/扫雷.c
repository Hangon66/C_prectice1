#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
#include "game.h"

//打印菜单
void menu()
{
	printf("******************************\n");
	printf("********* 1.扫雷游戏 *********\n");
	printf("********  0.  退出   *********\n");
	printf("******************************\n");
}

void game()
{
	char mine [ROWS][COLS] = { 0 };       //雷区
	char show [ROWS][COLS] = { 0 };	      //提示/用户界面
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine ,ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布雷
	SetMine(mine,ROW,COL);
	//排雷
	FindMine(mine, show, ROW, COL);
}

int main()
{ 
 	srand((unsigned int)time(NULL));
	int input = 0;
	
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n"); 
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}