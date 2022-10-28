#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: String 1
 * @s2: String 2
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
