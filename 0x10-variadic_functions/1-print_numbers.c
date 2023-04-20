#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: parameter 1
 * @n: parameter 2
 * @...: parameter 3
 *
 * Return: Always (0)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
	if (separator == NULL)
		return;
	else
		printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
