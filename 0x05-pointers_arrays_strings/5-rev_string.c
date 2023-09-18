#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string in place
 *
 * Description:
 * This function takes a pointer to a null-terminated string as input and
 * reverses the characters of the string in place. After the function
 * execution, the string will be reversed.
 *
 * @s: A pointer to a null-terminated string
 */
void rev_string(char *s)
{
char s1;
int i, j;
for (i = 0, j = strlen(s) - 1 ; i < j ; i++, j--)
{
s1 = s[i];
s[i] = s[j];
s[j] = s1;
}
}
