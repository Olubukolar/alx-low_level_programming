#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - funtion that prints strings
 * @separator: parameter 1
 * @n: parameter 2
 * @...: parameter 3
 *
 * Return: Always (0)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(string);
	unsigned int i;
	char *str;

	va_start(string, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
