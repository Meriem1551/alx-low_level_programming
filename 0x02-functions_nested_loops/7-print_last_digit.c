#include "main.h"
/**
* print_last_digit - Prints the last digit of an integer
*
* Description: This function computes and prints the last digit of the given
* integer `n`.
*
* @n: The integer for which the last digit is to be printed
*
* Return: The last digit of `n`
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = -last;
}
_putchar(last + '0');
return (last);
}
