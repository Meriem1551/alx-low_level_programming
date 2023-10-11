#include <stddef.h>
#ifndef _function_pointers_h_
#define _function_pointers_h_
int _putchar(char ch);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* _function_pointers_h_*/
