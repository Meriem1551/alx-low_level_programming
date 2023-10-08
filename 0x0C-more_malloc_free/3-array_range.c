#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * Description:  this function creates an array of integers
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max
 * Return:  the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 * @min: minimum value of the array
 * @max: maximum value of the array
 */
int *array_range(int min, int max)
{
int *array, i;

if (min > max)
{
return (NULL);
}
array = (int *)malloc((max - min + 1) * sizeof(int));
if (array == NULL)
{
return (NULL);
}
else
{
i = 0;
while (min <= max)
{
array[i] = min;
i++;
min++;
}
}
return (array);
}
