#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer.
 * Description: this function takes and array and its size and
 * a function to compare intergers
 * @array: a pointer to an array
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return:  returns the index of the first element for which the cmp
 * function does not return 0
 * if no element matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
return (0);
}
if (size <= 0)
{
return (-1);
}
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}

