#include <stdio.h>
/**
 * fibonacci - Computes the Fibonacci sequence
 *
 * Description: This function computes the Fibonacci sequence up to a specified
 * limit and prints the sequence to the standard output.
 *
 * @limit: The limit up to which to compute the Fibonacci sequence
 */
int main(void)
{
int i = 0;
long j = 1, k = 2;
while (i < 50)
{
if (i == 0)
printf("%ld", j);
else if (i == 1)
printf(", %ld", k);
else
{
k += j;
j = k - j;
printf(", %ld", k);
}
++i;
}
printf("\n");
return (0);
}
