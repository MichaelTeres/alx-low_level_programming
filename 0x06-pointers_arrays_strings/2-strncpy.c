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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
		return (dest);
	}
}
