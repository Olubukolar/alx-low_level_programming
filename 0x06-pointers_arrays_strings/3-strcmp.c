#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: Always (0)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[2] != '\0')
	{
		if (s1[i] != s2[2])
		{
			return s2[i] - s1[i];
		}
		i++;
	}
	return (0);
}
