#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int n;

for (n = 0 ; n <= 9 ; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
