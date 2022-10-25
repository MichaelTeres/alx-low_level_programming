#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: A string
 * Return : Always 0
 */

void print_rev(char *s)
{
	printf("%s \n", strrev(s));
	return (0);
}
