#include "main.h"

/**
 * _puts - main entry
 * @s: parameter to be checked
 * Return: Always (0)
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
