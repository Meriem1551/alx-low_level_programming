#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 * @ac: number of args
 * @av: pointer to args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int res;
if (ac != 3)
{
dprintf(2, "Usage: %s filename text\n", av[0]);
exit(1);
}
res = append_text_to_file(av[1], av[2]);
printf("-> %i)\n", res);
return (0);
}
