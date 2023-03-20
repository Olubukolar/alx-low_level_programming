#include <stdio.h>

/**
 * main - print all alphabet in lower and uppercase
 * Return: Always (0)
 *
 */
int main(void)
{
	int n = 97;

	n = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
		putchar('\n');
	return (0);
}
