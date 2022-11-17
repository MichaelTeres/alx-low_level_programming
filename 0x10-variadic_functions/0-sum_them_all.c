#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * Return:Alway return Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int Sum = 0;

	va_list ptr;

	va_start(ptr, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{

	for (i = 0; i < n; i++)
	{
		Sum = Sum + va_arg(ptr, int);
	}
	}
	va_end(ptr);
	return (Sum);
}
