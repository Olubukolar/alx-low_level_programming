#include "main.h"

/**
 * _strlen_recursion - to print length of a string
 * @s: parameter to be checked
 * Return: Always (0)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
