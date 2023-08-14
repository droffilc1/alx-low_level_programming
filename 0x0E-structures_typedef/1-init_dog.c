#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable type
 * @d: pointer structure of the dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
