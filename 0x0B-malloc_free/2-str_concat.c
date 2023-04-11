#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: Always (0)
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_size = strlen(s1);
	s2_size = strlen(s2);

	ptr = (char *) malloc(((s1_size + s2_size) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' ; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
