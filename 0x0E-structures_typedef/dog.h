#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that define a new type struct dog
 * @d: parameter 1
 * @name: parameter 2
 * @age: parameter 3
 * @owner: parameter 4
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
