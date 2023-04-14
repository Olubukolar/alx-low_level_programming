#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	return (n);
}
