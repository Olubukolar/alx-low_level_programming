#include "main.h"

/**
 *positive_or_negative - print positive integer
 *
 * @i: parameter to be checked
 *
 *Return: Always (0)
 */
void positive_or_negative(int i)
{

	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
