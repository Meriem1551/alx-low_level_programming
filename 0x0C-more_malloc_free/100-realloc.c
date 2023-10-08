#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * Description:  function that reallocates a memory block
 * using malloc and free, it take a pointer and size of the old and
 * new space memory The contents will be copied to the newly allocated
 * space, in the range from the start of ptr up to the minimum
 * of the old and new sizes
 * Return: If new_size > old_size, the “added” memory
 * should not be initialized.
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size)
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 * @ptr: is a pointer to the memory previously
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
{
return (NULL);
}
return (p);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
p = malloc(new_size);
if (p == NULL)
{
return (NULL);
}
for (i = 0 ; i < old_size && i < new_size ; i++)
{
p[i] = ((char *)ptr)[i];
}
free(ptr);
return (p);
}

