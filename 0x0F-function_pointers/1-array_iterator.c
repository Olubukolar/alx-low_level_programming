#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that iterates an array
 * @array: parameter 1
 * @size: parameter 2
 * @action: parameter 3
 * Return: Always (0)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0 ; x < size ; x++)
	{
		action(array[x]);
	}
}
