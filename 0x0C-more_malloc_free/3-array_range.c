#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: parameter 1
 * @max: parameter 2
 * Return: Always (0)
 */
int *array_range(int min, int max)
{
	int k, i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	k = max - min + 1;
	p = malloc(sizeof(int) * (max - min) + k);
		if (p == NULL)
			return (NULL);

	for (i = 0 ; i < k ; i++)
	p[i] = min++;
	return (p);
}
