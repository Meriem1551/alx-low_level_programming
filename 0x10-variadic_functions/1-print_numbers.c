#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list nums;

	va_start(nums, n);

	if ((int) n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < (int) n - 1; i++)
		printf("%d%s", va_arg(nums, int), (separator == NULL) ? "" : separator);

	printf("%d\n", va_arg(nums, int));

	va_end(nums);
}
