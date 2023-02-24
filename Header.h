#include<iostream>
using namespace std;
#define N 4

bool isValid(int board[N][N], int row, int col);
bool solveNQueen(int board[N][N], int col);
void printBoard(int board[N][N]);
bool checkSolution();
