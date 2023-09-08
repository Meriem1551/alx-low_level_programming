#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int n;
	int l;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l=n%10;
	/* your code goes there */
	if (l > 5)
	{
	printf("the last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
	printf("the last digit of %d is %d and is 0\n", n, l);
	}
	else 
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
