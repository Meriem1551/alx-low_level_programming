#include <stdio.h>
/**
 * fizz_buzz - Prints the numbers from 1 to 100, but for multiples of 3, it
 * prints "Fizz," and for multiples of 5, it prints "Buzz." For numbers that
 * are multiples of both 3 and 5, it prints "FizzBuzz."
 *
 * Description: This function implements the FizzBuzz algorithm and prints
 * the appropriate string for each number from 1 to 100, followed by a newline.
 */
int main(void)
{
int num;
for (num = 1 ; num <= 100 ; num++)
{
if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", num);
}
printf(" ");
}
printf("\n");
}
