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
char Determine(char board[ROW][COL],int row,int col);

//�ɸĽ�����scanf�������棬����Ӱ��������룻�Ż�ʤ���жϣ�Ŀǰֻ���ж���/��/�Խ��ߵ�ȫ�ȣ���