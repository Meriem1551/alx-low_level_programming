#include "main.h"
#include <unistd>
/**
 * @file _putchar.c
 * @brief Writes a character to the standard output.
 *
 * This function writes a single character to the standard output (usually the
 * terminal). It is typically used to display characters, one at a time.
 *
 * @param c The character to be written.
 *
 * @return On success, the character written is returned. On error, -1 is
 *         returned, and errno is set to indicate the error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
