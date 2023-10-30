#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
int num1 = 1024, num2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from), exit(99);
}
while (num1 == 1024)
{
	num1 = read(file_from, buf, 1024);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	num2 = write(file_to, buf, num1);
	if (num2 < num1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

return (0);
}
