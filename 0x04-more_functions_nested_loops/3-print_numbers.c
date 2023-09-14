#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9, followed by a new line
 *
 * Description: This function prints the numbers from 0 to 9, followed by
 * a new line, using only the `_putchar` function.
 */
void print_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
