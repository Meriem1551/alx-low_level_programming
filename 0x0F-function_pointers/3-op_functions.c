#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adding two numbers
 * @a: the first integre
 * @b: the second interger
 */
int op_add(int a, int b)
{
int sum; 
sum = a + b;
return (sum);
}
/**
 * op_sub - substracting two numbers
 * @a: the first integre
 * @b: the second interger
 */
int op_sub(int a, int b)
{
int sub;
sub = a - b;
return(sub);
}
/**
 * op_mul - multiplying two numbers
 * @a: the first integre
 * @b: the second interger
 */
int op_mul(int a, int b)
{
int mul;
mul = a * b;
return (mul);
}
/**
 * op_div - dividing two numbers
 * @a: the first integre
 * @b: the second interger
 */
int op_div(int a, int b)
{
int div;
if (b == 0)
div = a / b;
return (div);
}
/**
 * op_mod - finding the modulo of two numbers
 * @a: the first integre
 * @b: the second interger
 */
int op_mod(int a, int b)
{
int mod;
mod = a % b;
return (mod);
}
