#include <ctype.h>
#include "main.h"
/**
* _islower - Checks if a character is a lowercase letter
*
* Description: This function checks if the given character `c` is a lowercase
* letter. It returns 1 if `c` is lowercase and 0 otherwise.
*
* @c: The character to be checked
*
* Return: 1 if `c` is lowercase, 0 otherwise
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
