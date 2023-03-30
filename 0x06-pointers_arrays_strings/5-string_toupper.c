#include "main.h"

/**
 * *string_toupper - function that changes lower case in a string to upper case
 * @n: parameter
 * Return: Always (0)
 */
char *string_toupper(char *n)
{
	int i;
	int j;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	j = 0;
	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
		j++;
	}
	return (n);
}
