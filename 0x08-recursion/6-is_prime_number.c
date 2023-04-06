#include "main.h"

/**
 * check_prime - check for a prime number
 * @i: parameter 1
 * @num: parameter 2
 * Return: 1 if prime number
 */
int check_prime(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (check_prime(num, i + 1));
		}
	}
		else
		{
			return (1);
		}
}

/**
 * is_prime_number - check for prime number
 * @n: parameter
 * Return: 1 for prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
	}
}
