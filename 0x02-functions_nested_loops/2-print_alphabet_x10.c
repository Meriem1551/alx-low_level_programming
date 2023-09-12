#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints all lowercase letters from 'a' to 'z'
 * 10 times using the `print_alphabet` function.
 */
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0 ; i < 10 ; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
