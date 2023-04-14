#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - function that allocates value
 * @s: parameter 1
 * @a: parameter 2
 * @n: parameter 3
 * Return: Always (0)
 */
char *_memset(char *s, char a, unsigned int n)
{
	 char *ptr = s;

	while (n--)
		*s++ = a;
	return (ptr);
}

/**
 * *_calloc - function that allocates memory to an array
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: Always (0)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(sizeof(int) * nmemb);
	if (n == NULL)
		return (NULL);
	_memset(n, 0, sizeof(int) * nmemb);

	return (n);
}
