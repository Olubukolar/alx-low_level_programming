#include "main.h"

/**
 * *_strcpy - main entry
 * @dest: parameter 1
 * @src: parameter 2
 * Return: Always (0)
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
