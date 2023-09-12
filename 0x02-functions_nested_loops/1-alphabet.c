#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints all lowercase letters from 'a' to 'z'
 * using the putchar function.
 */
void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
