#include <stdio.h>
#include <stdlib.h>
/**
 * main -calculate multiplication of two numbers
 *
 * Description: main function takes argv and argc then returns
 * the multiplication
 * of two input numbers
 *
 * @argc:The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 for success and 1 for fail
 */
int main(int argc, char *argv[])
{
int mul;
char err[] = "Error";
if (argc != 3)
{
printf("%s\n", err);
return (1);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
