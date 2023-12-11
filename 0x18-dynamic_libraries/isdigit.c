#include "main.h"
/**
* _isdigit - Checks if a character is a digit (0-9)
*
* Description: This function takes a character as input and checks if it
* is a digit (0-9).
*
* @c: The character to check
*
* Return: 1 if `c` is a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
