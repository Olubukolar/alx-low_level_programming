#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: parameter to be checked
 * Return: Always (0)
 */
void *malloc_checked(unsigned int b)
{
	int *n;
	
	n = malloc(b);

	if (n == NULL)
		return (NULL);

	return (n);
}
