#include "variadic_functiins.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums up integers
 * @n: parameter 1
 *
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
		sum += (ap, int);
	va_arg(ap);
	return (sum);
}
