#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * Description: The function locates the first occurrence
 * in the string s of any of the by
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 * @s: pointer to a string
 * @accept: the accepted byte
 */
char *_strpbrk(char *s, char *accept)
{
char *p = strpbrk(s, accept);
return (p);
}
