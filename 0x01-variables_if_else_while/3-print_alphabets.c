#include <stdio.h>

/**
 * main - print all alphabet in lower and uppercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	return (0);
}
