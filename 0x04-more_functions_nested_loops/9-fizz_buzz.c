#include <stdio.h>
/**
 * main - Entry point for the FizzBuzz program
 *
 * Description: This is the main function for the FizzBuzz program. It prints
 * numbers from 1 to 100, following the FizzBuzz rules. For multiples of 3, it
 * prints "Fizz," for multiples of 5,
 * it prints "Buzz," and for numbers that are
 * multiples of both 3 and 5, it prints "FizzBuzz." All output is separated by
 * spaces, and a newline is added at the end.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 1 ; num <= 100 ; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", num);
}
if (num != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
