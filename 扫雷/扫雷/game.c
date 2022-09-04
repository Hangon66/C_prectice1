//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
#include "game.h"

//≥ı ºªØ∆Â≈Ã
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

//¥Ú”°∆Â≈Ã
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------…®¿◊”Œœ∑-----------\n");
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}