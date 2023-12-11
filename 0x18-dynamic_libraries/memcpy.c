#include "main.h"
/**
 * _memcpy - copies memory area.
 * Description: The  memcpy()  function  copies  n  bytes from
 * memory area src to memory area dest.  The memory areas must not overlap.
 * Return: a pointer to dest
 * @dest: pointer to the new area
 * @src: pointer to the area w ecopy
 * @n: first byte we copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = memcpy(dest, src, n);
return (p);
}
