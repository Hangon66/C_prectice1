#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
#include <time.h>
#include <stdlib.h>
#include"game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			board[r][c] = ' ';
		}
	}

}

//��ӡ����
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			printf(" %c ", board[r][c]);
			if (c < col - 1)
			{
				printf("|");
			}
		
		}
		printf("\n");
		if (r<row-1)
		{
			for (int c = 0; c < row; c++)
			{
				printf("---");
				if (c < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//�������
void PlayMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("�����:>\n");
		printf("��ѡ��:>\n");
		scanf("%d %d",&x,&y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				DisplayBoard(board, ROW, COL);
				break;
			}
			else
				printf("�����ѱ�ռ�ã�����������:>\n");
		}
		else
			printf("�Ƿ����꣬����������:>\n");
		DisplayBoard(board, ROW, COL);
	}
}

//��������
void BotMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			DisplayBoard(board, ROW, COL);
			break;
		}

	}
}

//ʤ���ж�
char Determine(char board[ROW][COL], int row, int col)
{
	//�жϵ���/�����Ӯ
	//��
	for (int r=0;r<row;r++)
	{
		int count = 0;
		for (int c = 1; c < col; c++)
		{
			if (board[r][c] == board[r][c - 1] &&board[r][0]!=' ')
			{
				count++;
			}
		}
		if (count == col - 1)
		{
			if (board[r][0] == '#')
			{
				printf(">>>>>>>>���Ӯ��<<<<<<<<\n");
				return '#';
			}
			else
			{
				printf(">>>>>>>>����Ӯ��<<<<<<<<\n");
				return '*';
			}
			
		}
	 }
	//��
	for (int c = 0; c < col; c++)
	{
		int count = 0;
		for (int r = 1; r < row; r++)
		{
			if (board[r][c] == board[r - 1][c]&& board[0][c]!=' ')
			{
				count++;
			}
		}
		if (count == row - 1)
		{
			if (board[0][c] == '#')
			{
				printf(">>>>>>>>���Ӯ��<<<<<<<<\n");
				return '#';
			}
			else
			{
				printf(">>>>>>>>����Ӯ��<<<<<<<<\n");
				return '*';
			}
		}
	}
	//��Խ���
	for (int i = 1; i < row; i++)
	{
		
		int count = 0;
		if (board[i][i] == board[i - 1][i - 1]&& board[0][0]!=' ')
		{
			count++;
		}
		if (count == row - 1)
		{
			if (board[0][0]=='#')
			{
				printf(">>>>>>>>���Ӯ��<<<<<<<<\n");
				return '#';
			}
			else
			{
				printf(">>>>>>>>����Ӯ��<<<<<<<<\n");
				return '*';
			}
		}
	}
	//�ҶԽ���
	while (1)
	{
		int count = 0;
		for (int i = 1; i < row; i++)
		{
			if (board[i][row -1- i] == board[i - 1][row - i] && board[0][row-1]!=' ')
			{
				count++;
			}
		}
		if (count == row-1)
		{
			if (board[0][row-1] == '#')
			{
				printf(">>>>>>>>���Ӯ��<<<<<<<<\n");
				return '#';
			}
			else
			{
				printf(">>>>>>>>����Ӯ��<<<<<<<<\n");
				return '*';
			}
		}
		break;
	}


	//�жϼ���
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			if (board[r][c] == ' ')
			{
				return 'C';
			}
		}
	}
	//ƽ��
	printf(">>>>>>>>ƽ��<<<<<<<<\n");
	return 'Q';

}
