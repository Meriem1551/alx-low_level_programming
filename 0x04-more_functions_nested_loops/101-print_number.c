#include "main.h"
/**
 * print_number - Prints an integer to the standard output
 *
 * Description: This function takes an integer as input and prints it to
 * the standard output. It handles both positive and negative integers.
 *
 * @n: The integer to be printed
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
