#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion
 *
 * @s: The string to be printed
 *
 * Description: This function takes a string as input and recursively prints
 * each character of the string, followed by a new line when the end of the
 * string is reached.
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
