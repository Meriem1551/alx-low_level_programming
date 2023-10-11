#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function of this code
 * @argc: pointer to number of args
 * @argv: pointer to the args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*operation_func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1])
{
printf("Error\n");
exit(99);
}
operation_func = get_op_func(argv[2]);
if (operation_func == NULL)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
printf("%d\n", operation_func(num1, num2));
return (0);
}
