#include "main.h"

/**
 * _isalpha - function prototype
 * @c: parameter to be checked
 *
 * Return: Always (0)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
