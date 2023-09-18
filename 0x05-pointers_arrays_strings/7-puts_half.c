#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string to the standard output
 *
 * Description:
 * This function takes a pointer to a null-terminated string as input and
 * prints the second half of the string to the standard output. If the string
 * has an odd length, it prints the characters from the middle to the end.
 *
 * @str: A pointer to a null-terminated string
 */
void puts_half(char *str)
{
int n, length = strlen(str);
if (length % 2 == 0)
{
for (n = (length / 2) ; n < length ; n++)
{
_putchar(str[n]);
}
}
else
{
for (n = (length - 1) / 2 ; n < length ; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}


