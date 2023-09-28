#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Computes the length of a string using recursion
 *
 * @s: The input string
 *
 * Description: This function calculates the length of a
 * string by recursively
 * traversing each character until the null-terminating
 * character is encountered.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == 0)
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
