#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: An input character
 * @c: An input character
 * @accept: An input character
 * Return: the number of bytes in the initial segment of s,
 * which consist only of bytes from accept
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}



char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
