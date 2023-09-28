#include "main.h"
/**
 * _pow_recursion - Computes x power of y
 *
 * @x: The input number;
 * @y: the power;
 *
 * Description: This function calculates x power of y by recursively
 * each time we add -1 to y and multiple x by it self
 *
 * Return: x power of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
