#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Prints a right-angled triangle of a specified size
 *
 * Description: This function prints a right-angled triangle composed of `#`
 * characters. The size of the triangle is determined by the `size` parameter.
 * The triangle is right-aligned. If `size` is 0 or less, nothing is printed.
 *
 * @size: The size of the triangle to print
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
}
else
{
for (i = 1 ; i <= size ; i++)
{
for (j = 1 ; j < size-i ; j++)
{
printf(" ");
}
for (j = 1 ; j <= i ; j++)
{
printf("#");
}
printf("\n");
}
}
}
