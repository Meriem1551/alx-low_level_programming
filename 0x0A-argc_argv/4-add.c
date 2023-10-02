#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
int i, suma = 0, res = 0;
char c[] = "Error", *find_letter;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
find_letter = argv[i];
while (*find_letter != 0)
{
if (*find_letter < 47 || *find_letter > 57)
{
printf("%s\n", c);
return (1);
}
find_letter++;
}
res = atoi(argv[i]);
suma += res;
}
printf("%d\n", suma);
}
else
printf("%d\n", 0);
return (0);
}
