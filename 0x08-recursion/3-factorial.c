#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: parameter to be checked
 * Return: -1 if lower than 0
 * and 1 if 0 or 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((n == 0) || (n == 1))
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
