#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 3 digits.
 * Return: 0
 */
int main(void)
{
int num = 0;
int d1;
int d2;
int d3;

while (num <= 999)
{
d1 = (num / 100 + '0');
d2 = (num / 10 % 10 + '0');
d3 = (num % 10 + '0');
if ((d1 < d2) &&(d2 < d3))
{
putchar(d1);
putchar(d2);
putchar(d3);
if (num != 789)
{
putchar(',');
putchar(' ');
}
}
num++;
}
putchar('\n');
return (0);
}
