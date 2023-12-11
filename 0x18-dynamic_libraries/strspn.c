#include "main.h"
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
