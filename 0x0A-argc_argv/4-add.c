#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds positive integers
 * @argc: argument counts
 * @argv: argument vector
 * Return: Always (0)
 */
int main(int argc, char* argv[])
{
	int i, sum = 0;

	if (argc >= 1)
	{
		for (i = 1 ; i < argc ; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
		return (0);
	}
	else if ((i != 0) || (i < 0))
	{
		printf("Error\n");
		return (1);
	}
}
