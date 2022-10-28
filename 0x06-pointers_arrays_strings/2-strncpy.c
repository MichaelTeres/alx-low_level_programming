#include "main.h"

/**
 * _strncpy - A function that concatenates two strings
 * @src: An input string
 * @dest: An input string
 * @n: No of bytes to copy
 * Return: A pointer to the resulting the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
