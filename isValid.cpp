#include "Header.h"

bool isValid(int board[N][N], int row, int col) {
    for (int i = 0; i < col; i++) //check whether there is queen in the left or not
        if (board[row][i])
            return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) //check whether there is queen in the left upper diagonal or not
            return false;
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j]) //check whether there is queen in the left lower diagonal or not
            return false;
    return true;
}
