#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: The string to print
 * Return: Always void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
