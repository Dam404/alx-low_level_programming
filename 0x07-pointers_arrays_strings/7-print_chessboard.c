#include "main.h"

/**
* print_chessboard - Prints the chessboard
* @a: 2D array representing the chessboard
*
* Description: The chessboard is represented as an 8x8 array of characters.
*      Each element of the array corresponds to a square on the chessboard.
*      The function prints the chessboard to the standard output.
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
