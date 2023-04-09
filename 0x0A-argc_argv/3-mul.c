#include "main.h"
#include <stdlib.h>

/**
 * main - function prototype
 * @argc: argument count
 * @argv: argument
 * Return: Always (0)
 */
int main(int argc, char* argv[])
{
	int a, b;

	if (argc <= 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
