#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

//四种情况
//玩家赢返回'*’
//电脑赢返回'#'
//继续返回'C'
//平局返回'Q'
char IsWin(char board[ROW][COL], int row, int col);
