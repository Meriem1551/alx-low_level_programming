#include "main.h"
/**
 * times_table - Prints the multiplication table for 0 to 9
 *
 * Description: This function prints the multiplication table for numbers from
 * 0 to 9 in a specific format.
 */
void times_table(void)
{
int num1, num2, result;
for (num1 = 0 ; num1 <= 9 ; num1++)
{
for (num2 = 0 ; num2 <= 9 ; num2++)
{
result = num1 * num2;
_putchar(result + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
