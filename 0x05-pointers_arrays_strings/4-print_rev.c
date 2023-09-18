#include "main.h"
#include <string.h>
/**
 * print_rev - Prints a string in reverse to the standard output
 *
 * Description:
 * This function takes a pointer to a null-terminated string as input and
 * prints the characters of the string in reverse order to the standard
 * output. It starts from the end of the string and continues printing
 * characters until it reaches the beginning.
 *
 * @s: A pointer to a null-terminated string
 */
void print_rev(char *s)
{
int index;
for (index = strlen(s) - 1 ; index >= 0 ; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
