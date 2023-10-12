#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_string(va_list);
void print_char(va_list);
void print_integer(va_list);
void print_float(va_list);


/**
 * struct opt - Typedef struct
 *
 * @op: Format
 * @f: The function associated
 **/
typedef struct opt
{
	char *op;
	void (*f)(va_list);
} p_opt;
#endif
