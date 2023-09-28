#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse,
 * followed by a new line, using recursion
 *
 * @s: The string to be printed in reverse
 *
 * Description: This function takes a string as input and recursively prints
 * its characters in reverse order, followed by a new line when the end of the
 * string is reached.
 */
void _print_rev_recursion(char *s)
{
if (*s == 0)
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
