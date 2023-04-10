#include "main.h"

/**
 * *_strncat - main entry
 * @dest: parameter 1
 * @src: parameter 2
 * @n: input number
 * Return: Always (0)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
