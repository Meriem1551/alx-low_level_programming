#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string to the standard output
 *
 * Description:
 * This function takes a pointer to a null-terminated string as input and
 * prints the string to the standard output. It continues printing characters
 * until it reaches the null terminator ('\0') at the end of the string.
 *
 * @str: A pointer to a null-terminated string
 */
void _puts(char *str)
{
puts(str);
_putchar('\n');
}
