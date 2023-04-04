#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: Always (0)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		(s[i] = b);
		n--;
	}
	return (s);
}
