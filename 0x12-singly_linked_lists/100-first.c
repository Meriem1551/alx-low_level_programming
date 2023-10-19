#include <stdio.h>
/**
 * print_before_main - prints a string before main is executed
 * Return: void
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI
			bore my house upon my back!\n");
}
