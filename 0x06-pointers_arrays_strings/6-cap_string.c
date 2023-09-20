#include "main.h"
/**
 * cap_string - Capitalizes all words in a string
 *
 * @s: The input string to capitalize
 *
 * Description: This function takes an input
 * string and capitalizes the first letter
 * of each word in the string. Words are assumed
 * to be separated by spaces or other
 * whitespace characters. It modifies the original string in-place.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
int a = 0, i;
int cspc = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
while (s[a])
{
i = 0;
while (i < cspc)
{
if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
s[a] -= 32;
i++;
}
a++;
}
return (s);
}
