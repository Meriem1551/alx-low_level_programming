#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * @s: String to be printed between the strings
 * @n: Number of strings passed to the function
 **/
void print_strings(const char *s, const unsigned int n, ...)
{
	int i;
	va_list str;
	char *aux;
	const char *aux2;

	va_start(str, n);

	aux2 = (s != NULL) ? s : "";
	for (i = 0; i < (int) n; i++)
	{
		aux = va_arg(str, char*);
		printf("%s%s", (aux != NULL) ? aux : "(nil)",
				(i < (int) n - 1) ? aux2 : "");
	}

	putchar(10);

	va_end(str);
}
