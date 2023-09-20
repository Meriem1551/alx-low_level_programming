#include "main.h"
#include <ctype.h>
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 *
 * @str: The input string to convert
 *
 * Description: This function takes an input string and converts all lowercase
 * letters to uppercase letters. It modifies the original string in-place.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *p = str;
while (*p != '\0')
{
if (islower(*p))
{
*p = toupper(*p);
}
p++;
}
return (str);
}






