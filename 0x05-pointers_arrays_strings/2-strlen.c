#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be printed
 *
 * Return: Always (0)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
