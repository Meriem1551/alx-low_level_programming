#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * Description: this function take a pointers to char  b and fill n byte
 * from the memory
 * Return:  pointer to the first n byte
 * @s: pointer contain the address of the case
 * @b: the value we fill with the memory
 * @n: the byte we fill
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = memset(s, b, n);
return (p);
}
