#include <stdio.h>
/**
 * main - print all arguments
 *
 * Description: main function takes argv and argc then returns the arguments
 * including the first one
 *
 * @argc:The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
