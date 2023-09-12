#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet
*
* Description: This function prints all lowercase letters from 'a' to 'z' 10 times
* using the putchar function.
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
