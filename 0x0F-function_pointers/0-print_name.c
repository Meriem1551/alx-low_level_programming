#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * Description: this function takes a pointer to a string and a pointer
 * to a function, and then call the function @f paasing the name a sparameter
 *@name: a pointer to a string
 *@f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
