#include <stdio.h>
/**
 * main - print the size of data of various files
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	fprintf(stderr, "size of a char: %lu byte(s)\n", sizeof(a));
	fprintf(stderr, "size of an int: %lu byte(s)\n", sizeof(b));
	fprintf(stderr, "size of a long int: %lu byte(s)\n", sizeof(c));
	fprintf(stderr, "size of a long long int: %lu byte(s)\n", sizeof(d));
	fprintf(stderr, "size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
