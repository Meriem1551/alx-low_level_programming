#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char.
 *
 * Description: this function creates array of chars and initialize it
 * @size: size of the array
 * @c: character
 *
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
array[i] = c;
}
return (array);
}
