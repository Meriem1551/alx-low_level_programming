#include "main.h"
/**
 * print_diagonal - Prints a diagonal line using the backslash character
 *
 * Description: This function prints a diagonal line using the backslash
 * character ('\'). The length of the diagonal is specified by the `n`
 * parameter. After printing the diagonal, it adds a newline.
 *
 * @n: The length of the diagonal line to print
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
