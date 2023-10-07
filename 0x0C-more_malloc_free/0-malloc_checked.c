#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  allocates memory
 * Description: this function takes the space to allocate and
 * return a pointer to this memory
 * @b: the space required for allocated it
 * Return: a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL){
		exit(98);
	}
	return (ptr);
}
