#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings, but limits the size of `src`
 *
 * Description: This function takes two strings, `dest` and `src`, and
 * appends the content of `src` to the end of `dest`, but it limits the
 * number of characters from `src` to concatenate based on the `n` parameter.
 * It ensures that the resulting string is null-terminated.
 *
 * @dest: The destination string to which `src` will be appended
 * @src: The source string to be appended to `dest`
 * @n: The maximum number of characters to append from `src`
 *
 * Return: A pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
