#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/** main - main function of this code
 * @argc: pointer to number of args
 * @argv: pointer to the args
 */
int main (int argc, char *argv[])
{
int num1, num2;
int result;
int (*operation_func)(int, int);
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argc > 4)
{
printf("Error\n");
exit(98);
}
if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' || argv[2] != '/' || argv[2] != '%')
{
printf("Error\n");
exit(99);
}
if (num2 == 0 && (argv[2] == '/' || argv[2] == '%'))
{
printf("Error\n");
exit(100);
}
operation_func = get_op_func(argv[2]);
result = operation_func(num1, num2);
printf("%d\n", result);
return (0);
}
