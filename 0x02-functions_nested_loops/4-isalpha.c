#include <ctype.h>
#include "main.h"
/**
* _isalpha - Checks if a character is an alphabetic character
*
* Description: This function checks if the given character `c` is an
* alphabetic character (either uppercase or lowercase). It returns 1 if `c` is
* alphabetic and 0 otherwise.
*
* @c: The character to be checked
*
* Return: 1 if `c` is alphabetic, 0 otherwise
*/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
