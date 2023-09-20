#include "main.h"
/**
 * reverse_array - Reverses the elements of an integer array
 *
 * Description: This function takes an integer array `a` and its length `n`
 * and reverses the order of its elements in place. It swaps the first element
 * with the last element, the second element
 *with the second-to-last element, and
 * so on, until the entire array is reversed.
 *
 * @a: The integer array to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;
for (i = 0, j = n - 1 ; i < n / 2 ; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
