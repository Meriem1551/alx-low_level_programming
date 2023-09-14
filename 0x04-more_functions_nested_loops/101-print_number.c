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
n *= -1;
k = n;
_putchar('-');
}
k /= 10;
if (k != 0)
{
print_number(k);
_putchar((unsigned int) n % 10 + '0');
}
}
