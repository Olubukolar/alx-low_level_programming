#include "main.h"

/**
 * *_strchr - main entry
 * @s: parameter 1
 * @c: parameter 2
 * Return: Always (0)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
