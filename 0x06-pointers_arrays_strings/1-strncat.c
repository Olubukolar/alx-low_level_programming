#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: character to be copied from
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
