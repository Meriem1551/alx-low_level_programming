#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * Description: function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * returns a pointer to a new string @s  which is a
 * duplicate of the string str.
 * Memory for the new string is obtained with malloc, and can be
 * freed with free.
 *
 * @str: a pointer to a string
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns
 * a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *s = (char *)malloc(sizeof(char) - 1);
if (str == NULL)
{
return (NULL);
}
s = strdup(str);
return (s);
free(s);
}
