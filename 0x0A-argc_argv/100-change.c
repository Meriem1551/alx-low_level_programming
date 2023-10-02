#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
char c[] = "Error";
int dev = 0, coins = 0;
if (argc != 2)
{
printf("%s\n", c);
return (1);
}
dev = atoi(argv[1]);
while (dev >= 25)
{
dev -= 25;
coins++;
}
while (dev >= 10)
{
dev -= 10;
coins++;
}
while (dev >= 5)
{
dev -= 5;
coins++;
}
while (dev >= 2)
{
dev -= 2;
coins++;
}
if (dev == 1)
{
coins++;
}
printf("%d\n", coins);
return (0);
}
