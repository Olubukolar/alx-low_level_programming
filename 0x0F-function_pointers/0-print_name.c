#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @f: parameter 1
 * @name: parameter 2
 * Return: Always (0)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
