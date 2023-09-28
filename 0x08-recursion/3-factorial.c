#include "main.h"
/**
 * factorial - Computes the factorial of a number using recursion
 *
 * @n: The input number
 *
 * Description: This function calculates the factorial
 * of a number by recursively
 * by adding -1 each time until it equal to 0.
 * Return: The factorial of the number.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
