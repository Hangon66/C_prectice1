//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <math.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);
//电脑下棋
void BotMove(char board[ROW][COL],int row,int col);
//判断胜负
char Determine(char board[ROW][COL],int row,int col);

//可改进项：清除scanf函数缓存，避免影响后续输入；优化胜负判断（目前只能判断行/列/对角线的全等）；