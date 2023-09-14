#include <stdio.h>
#include <math.h>
/**
 * main - Entry point of the program
 *
 * Description: This program calculates and displays the largest prime factor
 *              of a user-provided integer. It accomplishes this task within
 *              the main function, making it a self-contained program. The user
 *              is prompted to enter a number, and the program then calculates
 *              and prints the largest prime factor of that number.
 *
 * Return: Always returns 0, indicating successful execution.
 */
int main(void)
{
long x, maxf;
long number = 612852475143;
double square = sqrt(number);
for (x = 1 ; x <= square ; x++)
{
if (number % x == 0)
{
maxf = number / x;
}
}
printf("%ld\n", maxf);
return (0);
}
