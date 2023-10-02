#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - Converts a string to an integer
 *
 * Description:
 * This function takes a pointer to a string containing a sequence of digits
 * and converts it to an integer. It considers leading characters until the
 * first non-digit character as well as the sign of the integer.
 *
 * @s: A pointer to a string containing the numeric characters
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
int sign;
unsigned int num;
char *temp;
temp = s;
num = 0;
sign = 1;
while (*temp != '\0' && (*temp < '0' || *temp > '9'))
{
if (*temp == '-')
sign *= -1;
temp++;
}
if (*temp != '\0')
{
do {
num = num * 10 + (*temp - '0');
temp++;
} while (*temp >= '0' && *temp <= '9');
}
return (num *sign);
}
