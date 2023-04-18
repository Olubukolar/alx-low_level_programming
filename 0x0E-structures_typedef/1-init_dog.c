#include <stdlib>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @d: parameter 1
 * @age: parameter 2
 * @name: parameter 3
 * @owner: parameter 4
 * Return: Always (0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d.name = name;
	d.age = age;
	d.owner = owner;
}
