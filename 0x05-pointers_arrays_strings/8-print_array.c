#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints elements of an integer array to the standard output
 *
 * Description:
 * This function takes an array of integers, its size, and prints the elements
 * of the array to the standard output. It separates the elements with commas
 * and spaces and prints them in the order they appear in the array.
 *
 * @a: An array of integers
 * @n: The number of elements in the array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}

