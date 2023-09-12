include "main.h"
/**
* print_sign - Prints the sign of a number
*
* Description: This function checks the sign of the given integer `n` and
* prints one of three possible messages: "positive", "zero", or "negative",
* depending on the sign of `n`.
*
* @n: The integer to be checked
*
* Return: 1 if `n` is positive, 0 if `n` is zero, -1 if `n` is negative
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
}
