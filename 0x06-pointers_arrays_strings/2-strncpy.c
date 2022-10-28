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
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
		return (dest);
	}
}
