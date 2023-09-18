#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string to the standard output
 *
 * Description:
 * This function takes a pointer to a null-terminated string as input and
 * prints every other character of the string,
 * starting from the first character,
 * to the standard output. It prints only the characters at even indices.
 *
 * @str: A pointer to a null-terminated string
 */
void puts2(char *str)
{
int i, length = strlen(str);
for (i = 0 ; i < length ; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
