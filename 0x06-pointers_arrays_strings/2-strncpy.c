#include "main.h"

/**
 * *_strncpy -  function that copies a string.
 * @dest: parameter 1
 * @src: parameter 2
 * @n: character to be copied from
 * Return: Always (0)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && (dest[i] = src[i]) != '\0')
	{
		i++;
	}
	while (i < n)
	{
		i++;
	}
	return (dest);
}
