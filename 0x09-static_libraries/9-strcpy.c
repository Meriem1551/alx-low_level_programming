#include "main.h"
#include <string.h>
/**
 * _strcpy - Copies a source string to a destination buffer
 *
 * Description:
 * This function takes a source string and copies it to a destination buffer.
 * It ensures that the destination buffer is null-terminated. The function
 * copies each character from the source to the destination, including the
 * null terminator, if present in the source.
 *
 * @dest: A pointer to the destination buffer
 * @src: A pointer to the source string
 *
 * Return: A pointer to the destination buffer (same as 'dest')
 */
char *_strcpy(char *dest, char *src)
{
return (strcpy(dest, src));
}
