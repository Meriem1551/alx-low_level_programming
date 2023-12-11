#include "main.h"
/**
 * _strstr - locates a substring.
 * Description: The _strstr() function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * @haystack: pointer to a string
 * @needle: pointer to a substring
 */
char *_strstr(char *haystack, char *needle)
{
char *p = strstr(haystack, needle);
return (p);
}
