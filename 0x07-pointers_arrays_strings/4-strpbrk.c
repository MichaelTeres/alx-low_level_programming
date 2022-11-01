#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: An input character
 * @i: An input character
 * @c: An input character
 * @accept: An input character
 * Return: the number of bytes in the initial segment of s,
 * which consist only of bytes from accept
 */
char *_strchr(char *i, char c)
{
	while (*i)
	{
		if (*i != c)
			s++;
		else
			return (i);
	}
	if (c == '\0')
		return (i);
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
