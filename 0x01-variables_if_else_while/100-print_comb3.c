#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
int d1;
int d2;
int num;

for (d1 = 0 ; d1 <=8 ; d1++)
{
for (d2 = d1 + 1 ; d2 <= 9 ; d2++)
{
num = d1 * 10 + d2;
putchar(num + '0');
if ( num != 89)
{
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
