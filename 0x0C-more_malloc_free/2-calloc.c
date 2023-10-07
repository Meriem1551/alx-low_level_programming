#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * Description: allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *c;
c = malloc(nmemb * size);
if (size == 0 || nmemb == 0)
	return (NULL);

if (c == NULL)
	return (NULL);
return (c);
}
