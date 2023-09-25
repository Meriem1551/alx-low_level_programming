#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 *
 * @a: The 2D array representing the square matrix.
 * @size: The size of the square matrix.
 *
 * Description: This function takes a square
 * matrix represented by a 2D array 'a'
 * and its size 'size'. It calculates and prints the sums of the two diagonals
 * of the matrix to the standard output.
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int j = size - 1;
int sum1 = 0;
int sum2 = 0;
while (i <= (size * size))
{
sum1 = sum1 + a[i];
i = i + size + 1;
}
while (j < (size * size - 1))
{
sum2 += a[j];
j = j + size - 1;
}
printf("%d, ", sum1);
printf("%d", sum2);
printf("\n");
}
