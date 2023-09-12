#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 * Description: This function prints the times table for a given integer `n`.
 * The table starts with 0 and goes up to n times 10.
 *
 * @n: The times table to be printed
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
{
_putchar(result + '0');
}
else
{
_putchar(",");
_putchar(" ");
_putchar(result + '0');
}
}
_putchar("\n");
}
}
}
