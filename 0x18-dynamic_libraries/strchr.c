#include "main.h"
/**
 * _strchr - locates a character in a string.
 * Description: The strchr() function returns a pointer to the first
 * occurrence of the character c in the string s.
 * Return:  a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 * @s: pointer to a string
 * @c: pointer to a character
 */
char *_strchr(char *s, char c)
{
char *p = strchr(s, c);
return (p);
}
