#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adding two numbers
 * @a: the first integre
 * @b: the second interger
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - substracting two numbers
 * @a: the first integre
 * @b: the second interger
 * Return: sub of @a and @b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplying two numbers
 * @a: the first integre
 * @b: the second interger
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - dividing two numbers
 * @a: the first integre
 * @b: the second interger
 * Return: dividion of @a and @b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - finding the modulo of two numbers
 * @a: the first integre
 * @b: the second interger
 * Return: modular of @a and @b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
