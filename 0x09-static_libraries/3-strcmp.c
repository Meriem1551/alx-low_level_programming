#include "main.h"
#include <string.h>
/**
 * _strcmp - Compares two strings lexicographically
 *
 * Description: This function compares two strings, `s1` and `s2`,
 * lexicographically. It compares each character of the strings until a
 * difference is found or until the null-terminator of either string is
 * encountered. The comparison is case-sensitive.
 *
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: An integer less than, equal to, or greater than zero, depending
 * on whether `s1` is less than, equal to, or greater than `s2`, respectively.
 */
int _strcmp(char *s1, char *s2)
{
return (strcmp(s1, s2));
}
