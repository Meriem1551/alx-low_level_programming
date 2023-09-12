#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers from n to 98
 *
 * Description: This function prints all the numbers from the given integer `n`
 * to 98, separated by commas and followed by a new line.
 *
 * @n: The starting number
 */

void print_to_98(int n)
{
int num;
if (n < 98)
{
for (num = n ; num <= 98 ; num++)
{
printf("%d", num);
if (num != 98)
{
printf(",");
printf(" ");
}
}
}
else if (n == 98)
{
printf("%d", n);
}
else
{
for (num = n ; num >= 98 ; num--)
{
printf("%d", num);
if (num != 98)
{
printf(",");
printf(" ");
}
}
}
printf("\n");
}

