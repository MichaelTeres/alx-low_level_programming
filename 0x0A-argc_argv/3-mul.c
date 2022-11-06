#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc == 1)
	{
		for (i = 0; i < argc; i++)
		{
			mul = argv[1] * argv[2];
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("error\n");
	}
	return (1);
}
