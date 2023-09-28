#include <unistd.h>
/**
 * main - function to print
 *
 * Return: 0
 */
int _putchar(char ch)
{
return (write(1, &ch, 1));
}
