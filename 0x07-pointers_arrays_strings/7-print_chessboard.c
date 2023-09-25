#include "main.h"
/**
 * print_chessboard - Prints a chessboard configuration to the standard output.
 *
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function takes a 2D array 'a' representing a chessboard
 * configuration and prints it to the standard output.
 * The chessboard is printed
 * as a grid of characters, with each cell represented by a space or a chess
 * piece character.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0 ; i < 8 ; i++)
{
for (j = 0 ; j < 8 ; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}

