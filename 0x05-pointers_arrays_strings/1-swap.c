#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * This file contains a C program that defines a
 * function to swap the values of
 * two integers. The function takes two integer pointers as parameters and
 * modifies the values they point to, effectively swapping
 * the values in memory.
 *
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
