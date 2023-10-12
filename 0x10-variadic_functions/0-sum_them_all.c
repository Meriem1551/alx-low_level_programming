#include "variadic_functions.h"
#include "variadic_functions.h"


/**
 * sum_them_all - Sum of all its parameters
 * @n: Number of parameters
 * Return: Returns the sum of all its parameters
 **/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list nums;

	va_start(nums, n);

	sum = 0;
	if (n <= 0)
		return (sum);

	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);
	return (sum);
}
