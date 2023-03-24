#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: parameter to be checked
 *
 * Return: Always (0)
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
	for (j = 1 ; j <= n ; j++)
	{
		_putchar('_');
	}
	       _putchar('\n');
	}
}
