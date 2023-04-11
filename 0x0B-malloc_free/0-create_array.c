#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of character
 * @size: parameter 1
 * @c: parameter 2
 * Return: Always (0)
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		x[y] = c;
	return (x);
}
