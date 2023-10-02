#include <unistd.h>
/**
 * _putchar - print a character to the stabdard output
 *
 * Description:
 * This file contains the implementation of the _putchar function.
 * The _putchar
 * function is a custom character output function commonly used in C programs.
 * It takes a single character as input and writes that character
 * to the standard
 * output (usually the console or terminal);
 * @c: The character to be written to the standard output.
 *
 * Return:
 * - On success, it returns the character that was written.
 * - On error, it returns -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
