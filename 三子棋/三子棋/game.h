//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayMove(char board[ROW][COL], int row, int col);
//��������
void BotMove(char board[ROW][COL],int row,int col);
//�ж�ʤ��
int Determine(char board[ROW][COL],int row,int col);