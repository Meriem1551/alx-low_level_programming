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
int i;
if (n > 0)
{
for (i = 1 ; i <= n ; i++)
{
_putchar('\');
}
}
_putchar('\n');
}
