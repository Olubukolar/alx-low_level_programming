#include "main.h"

/**
 * *_strpbrk - function prototype
 * @s: parameter 1
 * @accept: parameter 2
 * Return: Always (0)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0 ; accept[k];)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
