#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings
 *
 * Description: This function takes two strings, `dest` and `src`, and
 * appends the content of `src` to the end of `dest`. It ensures that
 * the resulting string is null-terminated.
 *
 * @dest: The destination string to which `src` will be appended
 * @src: The source string to be appended to `dest`
 *
 * Return: A pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
return (strcat(dest, src));
}
