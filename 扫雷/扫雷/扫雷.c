#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
#include "game.h"

//��ӡ�˵�
void menu()
{
	printf("******************************\n");
	printf("********* 1.ɨ����Ϸ *********\n");
	printf("********  0.  �˳�   *********\n");
	printf("******************************\n");
}

void game()
{
	char mine [ROWS][COLS] = { 0 };       //����
	char show [ROWS][COLS] = { 0 };	      //��ʾ/�û�����
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine ,ROW, COL);
	DisplayBoard(show, ROW, COL);
	//����
	SetMine(mine,ROW,COL);
	//����
	FindMine(mine, show, ROW, COL);
}

int main()
{ 
 	srand((unsigned int)time(NULL));
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n"); 
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}