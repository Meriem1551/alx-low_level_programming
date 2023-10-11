#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func -  perform the operation asked by the user
 * Description: takes an operator and return a pointer to the matched funtion
 * @s: a pointer to the operator
 * Return: a pointer to the function that corresponds to
 * the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 10)
{
if (s[0] ==  ops->op[i])
{
break;
}
i++;
}
return (ops[i / 2].f);
}
