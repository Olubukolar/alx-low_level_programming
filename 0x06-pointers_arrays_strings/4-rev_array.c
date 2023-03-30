#include "main.h"

/**
 * reverse_array - function that reverses arrays
 * @a: parameter 1
 * @n: parameter 2
 * Return: Always (0)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for  (i = 0; i < n ; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
