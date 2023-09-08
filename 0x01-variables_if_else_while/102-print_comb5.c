#include <stdio.h>
/**
* main - program that prints all possible different combinations of 3 digits.
* Return: 0
*/
int main(void)
{
 int i, j;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{	
if (i != j)
{
/* Print the first number with two digits */
putchar((i / 10) + '0');
putchar((i % 10) + '0');
/* Print a space between the two numbers */
putchar(' ');
/* Print the second number with two digits */
putchar((j / 10) + '0');
putchar((j % 10) + '0');
/* Print a comma and a space to separate combinations */
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

