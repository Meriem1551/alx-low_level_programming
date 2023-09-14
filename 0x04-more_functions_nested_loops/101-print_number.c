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
unsigned int k = n;
if (n < 0)
{
_putchar('-');
k = -k;
}
if ((k / 10) > 0)
{
print_number(k / 10);
}
_putchar((k % 10) + '0');
}
