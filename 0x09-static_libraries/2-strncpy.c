#include "main.h"
#include <string.h>
/**
 * _strncpy - Copies a specified number of characters from `src` to `dest`
 *
 * Description: This function copies up to `n` characters from the `src` string
 * to the `dest` string. If the length of `src` is less than `n`, the remaining
 * characters in `dest` are filled with null bytes ('\0') to ensure that
 * `dest` is null-terminated.
 *
 * @dest: The destination string to which characters are copied
 * @src: The source string from which characters are copied
 * @n: The maximum number of characters to copy from `src`
 *
 * Return: A pointer to the resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
