#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer
 * @text_content: pointer to string
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
