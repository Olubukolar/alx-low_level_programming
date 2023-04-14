#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * @n: parameter 3
 * Return: Always (0)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1_len = 0 ; s1[s1_len] != '\0' ; s1_len++)
		;
	for (s2_len = 0 ; s2[s2_len] != '\0' ; s2_len++)
		;
	ptr = malloc((s1_len + n + 1));
			{
			if (ptr == NULL)
			return (NULL);
			}

	for (i = 0 ; s1[i] != '\0'; i++)
	{
	ptr[i] = s1[i];
	}

	for (j = 0 ; j < n ; j++)
	{
	ptr[i] = s2[j];
	i++;
	}

	ptr[i] = '\0';
	return (ptr);
	;
}
