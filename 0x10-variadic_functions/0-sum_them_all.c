#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums up integers
 * @n: parameter 1
 * @...: parameter 2
 * Return: Always (0)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0 ; i < n ; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
