#include <stdio.h>
/**
 * main - print program name
 *
 * Description: main function takes argv and argc then returns the nam program
 *
 * @argc:The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
(void)argc;
return (0);
}
