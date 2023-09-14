#include "main.h"
/**
 * print_line - Prints a line of a specified length using the underscore character
 *
 * Description: This function prints a line of a specified length using the
 * underscore character ('_'). After printing the line, it adds a newline.
 *
 * @n: The length of the line to print
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1 ; i <= n ; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
