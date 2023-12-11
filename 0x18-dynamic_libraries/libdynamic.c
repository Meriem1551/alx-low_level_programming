#include "main.h"
/**
 * main - function to print
 *
 * Return: 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* _islower - Checks if a character is a lowercase letter
*
* Description: This function checks if the given character `c` is a lowercase
* letter. It returns 1 if `c` is lowercase and 0 otherwise.
*
* @c: The character to be checked
*
* Return: 1 if `c` is lowercase, 0 otherwise
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
/**
* _isalpha - Checks if a character is an alphabetic character
*
* Description: This function checks if the given character `c` is an
* alphabetic character (either uppercase or lowercase). It returns 1 if `c` is
* alphabetic and 0 otherwise.
*
* @c: The character to be checked
*
* Return: 1 if `c` is alphabetic, 0 otherwise
*/
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
/**
* _abs - Computes the absolute value of an integer
*
* Description: This function computes and returns the absolute value of the
* given integer `n`.
*
* @n: The integer for which the absolute value is to be computed
*
* Return: The absolute value of `n`
*/
int _abs(int n)
{
return (abs(n));
}
/**
* _isupper - Checks if a character is an uppercase letter
*
* Description: This function takes a character as input and checks if it
* is an uppercase letter (A-Z).
*
* @c: The character to check
*
* Return: 1 if `c` is an uppercase letter, 0 otherwise
*/
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
/**
* _isdigit - Checks if a character is a digit (0-9)
*
* Description: This function takes a character as input and checks if it
* is a digit (0-9).
*
* @c: The character to check
*
* Return: 1 if `c` is a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
/**
 * _strlen - Calculates the length of a string
 *
 * Description: This function takes a pointer to a null-terminated string as
 * input and returns the length (number of characters) of the string.
 *
 * @s: A pointer to a null-terminated string
 *
 * Return: The length of the string (number of characters)
 */
int _strlen(char *s)
{
return (strlen(s));
}
/**
 * _puts - Prints a string to the standard output
 *
 * Description:
 * This function takes a pointer to a null-terminated string as input and
 * prints the string to the standard output. It continues printing characters
 * until it reaches the null terminator ('\0') at the end of the string.
 *
 * @str: A pointer to a null-terminated string
 */
void _puts(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
/**
 * _strcpy - Copies a source string to a destination buffer
 *
 * Description:
 * This function takes a source string and copies it to a destination buffer.
 * It ensures that the destination buffer is null-terminated. The function
 * copies each character from the source to the destination, including the
 * null terminator, if present in the source.
 *
 * @dest: A pointer to the destination buffer
 * @src: A pointer to the source string
 *
 * Return: A pointer to the destination buffer (same as 'dest')
 */
char *_strcpy(char *dest, char *src)
{
return (strcpy(dest, src));
}
/**
 * _atoi - Converts a string to an integer
 *
 * Description:
 * This function takes a pointer to a string containing a sequence of digits
 * and converts it to an integer. It considers leading characters until the
 * first non-digit character as well as the sign of the integer.
 *
 * @s: A pointer to a string containing the numeric characters
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
int sign;
unsigned int num;
char *temp;
temp = s;
num = 0;
sign = 1;
while (*temp != '\0' && (*temp < '0' || *temp > '9'))
{
if (*temp == '-')
sign *= -1;
temp++;
}
if (*temp != '\0')
{
do {
num = num * 10 + (*temp - '0');
temp++;
} while (*temp >= '0' && *temp <= '9');
}
return (num *sign);
}
/**
 * _strcat - Concatenates two strings
 *
 * Description: This function takes two strings, `dest` and `src`, and
 * appends the content of `src` to the end of `dest`. It ensures that
 * the resulting string is null-terminated.
 *
 * @dest: The destination string to which `src` will be appended
 * @src: The source string to be appended to `dest`
 *
 * Return: A pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
return (strcat(dest, src));
}
/**
 * _strncat - Concatenates two strings, but limits the size of `src`
 *
 * Description: This function takes two strings, `dest` and `src`, and
 * appends the content of `src` to the end of `dest`, but it limits the
 * number of characters from `src` to concatenate based on the `n` parameter.
 * It ensures that the resulting string is null-terminated.
 *
 * @dest: The destination string to which `src` will be appended
 * @src: The source string to be appended to `dest`
 * @n: The maximum number of characters to append from `src`
 *
 * Return: A pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
/**
 * _strncpy - Copies a specified number of characters from `src` to `dest`
 *
 * Description: This function copies up to `n` characters from the `src` string
 * to the `dest` string. If the length of `src` is less than `n`, the remaining
 * characters in `dest` are filled with null bytes ('\0') to ensure that
 * `dest` is null-terminated.
 *
 * @dest: The destination string to which characters are copied
 * @src: The source string from which characters are copied
 * @n: The maximum number of characters to copy from `src`
 *
 * Return: A pointer to the resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
/**
 * _strcmp - Compares two strings lexicographically
 *
 * Description: This function compares two strings, `s1` and `s2`,
 * lexicographically. It compares each character of the strings until a
 * difference is found or until the null-terminator of either string is
 * encountered. The comparison is case-sensitive.
 *
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: An integer less than, equal to, or greater than zero, depending
 * on whether `s1` is less than, equal to, or greater than `s2`, respectively.
 */
int _strcmp(char *s1, char *s2)
{
return (strcmp(s1, s2));
}
/**
 * _memset - fills memory with a constant byte.
 * Description: this function take a pointers to char  b and fill n byte
 * from the memory
 * Return:  pointer to the first n byte
 * @s: pointer contain the address of the case
 * @b: the value we fill with the memory
 * @n: the byte we fill
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = memset(s, b, n);
return (p);
}
/**
 * _memcpy - copies memory area.
 * Description: The  memcpy()  function  copies  n  bytes from
 * memory area src to memory area dest.  The memory areas must not overlap.
 * Return: a pointer to dest
 * @dest: pointer to the new area
 * @src: pointer to the area w ecopy
 * @n: first byte we copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = memcpy(dest, src, n);
return (p);
}
/**
 * _strchr - locates a character in a string.
 * Description: The strchr() function returns a pointer to the first
 * occurrence of the character c in the string s.
 * Return:  a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 * @s: pointer to a string
 * @c: pointer to a character
 */
char *_strchr(char *s, char c)
{
char *p = strchr(s, c);
return (p);
}
/**
 * _strspn - function gets the length of a prefix substring
 * Description: The function calculates the length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 * @s: pointer to a string
 * @accept: byte accepted
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = strspn(s, accept);
return (length);
}
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * Description: The function locates the first occurrence
 * in the string s of any of the by
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 * @s: pointer to a string
 * @accept: the accepted byte
 */
char *_strpbrk(char *s, char *accept)
{
char *p = strpbrk(s, accept);
return (p);
}
/**
 * _strstr - locates a substring.
 * Description: The _strstr() function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * @haystack: pointer to a string
 * @needle: pointer to a substring
 */
char *_strstr(char *haystack, char *needle)
{
char *p = strstr(haystack, needle);
return (p);
}
