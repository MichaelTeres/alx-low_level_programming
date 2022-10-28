#include "main.h"
#include <stddef.h>

/**
 * _strncpy - A function that concatenates two strings
 * @src: An input string
 * @dest: An input string
 * Return: A pointer to the resulting the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	if ((dest == NULL) &&(src == NULL))
	{
		return NULL;
	}
	
	char* start = dest;
	
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}
