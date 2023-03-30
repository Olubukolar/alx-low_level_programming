#include "main.h"

/**
 * *_strcat - unction that concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * Return: Always (0)
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
