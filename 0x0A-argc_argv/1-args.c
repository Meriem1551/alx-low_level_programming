#include <stdio.h>
/**
 * main - print number of arguments
 *
 * Description: main function takes argv and argc then returns
 * the number of arguments
 *
 * @argc:The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
