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
int num;

for (num = 0 ; num <= 9 ; num++)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
