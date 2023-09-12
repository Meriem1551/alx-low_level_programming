#include <stdio.h>
/**
 * natural - Function to calculate the sum of natural numbers
 *
 * Description: This function calculates the sum of natural numbers
 * up to a given limit.
 *
 * @limit: The limit up to which to calculate the sum
 *
 * Return: The sum of natural numbers up to the limit
 */
int main(void)
{
int sum = 0, i;
for (i = 0 ; i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
