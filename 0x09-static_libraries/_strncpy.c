#include "main.h"

/**
 * *_strncpy - main entry
 * @dest: parameter 1
 * @src: parameter 2
 * @n: input
 * Return: Always (0)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
