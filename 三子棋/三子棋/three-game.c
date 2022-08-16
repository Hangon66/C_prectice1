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
	//��������
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
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
		printf("��ѡ�񣺡�\n");
		scanf("%d", &x1);
		switch (x1)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (x1);
}