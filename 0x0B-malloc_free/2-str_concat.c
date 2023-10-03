#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings.
 *
 * Description: this function takes two strings and returns
 * a pointer to the new string @s3
 *
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: pointer to th enew string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int index, len = 0;
char *s3;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (index = 0 ; s1[index] || s2[index] ; i++)
{
len++;
}
s3 = (char *)malloc(sizeof(char) * len);
if (s3 == NULL)
{
return (NULL);
}
strcpy(s3, s1);
strcat(s3, s2);
return (s3);
free(s3);
}

