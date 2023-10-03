#include "main.h"
#include <stdlib.h>
#include <string.h>
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
size_t len_s1 = strlen(s1);
size_t len_s2 = strlen(s2);
size_t total_len = len_s1 + len_s2 + 1
char *s3 = (char *)malloc(total_len);
if (s3 == NULL)
{
return NULL;
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
strcpy(s3, s1);
strcat(s3, s2);
return (s3);
free(s3);
}
