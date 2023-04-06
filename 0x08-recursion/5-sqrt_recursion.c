#include "main.h"

/**
 * check_sqrt - check if the square of nmber is correct
 * @num: paramter 1
 * @psqrt: parameter 2
 * Return: Always (0)
 */
int check_sqrt(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	if ((psqrt * psqrt) > num)
	{
		return (-1);
	}
	else
		return (check_sqrt(num, psqrt + 1));
}

/**
 * _sqrt_recursion - function that return the natural square roots
 * @n: parameter
 * Return: -1 at error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (check_sqrt(n, 0));
}
