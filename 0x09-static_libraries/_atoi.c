#include "main.h"

/**
 * _atoi - main entry
 * @s: parameter to be checked
 * Return: Always (0)
 */
int _atoi(char *s)
{
	int sign = l, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0' && s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -l;
		i++;
	}
	while s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);

}
