#include "main.h"

/**
 * main - function prototype
 * @argc: argument count
 * @argv: argument
 * Return: Always (0)
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
