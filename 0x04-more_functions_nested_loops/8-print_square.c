#include "main.h"
/**
 * print_square - Prints a square made of '#' characters
 *
 * Description: This function prints a square made of '#' characters.
 * The size of the square is specified by the `size` parameter.
 *
 * @size: The size of the square to print
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
