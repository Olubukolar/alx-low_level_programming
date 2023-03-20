#include <stdio.h>
#include <ctype.h>
/**
 * main - print all alphabet in lower and uppercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(toupper(i));
	}
	putchar('⧵n');
	return (0);
}
