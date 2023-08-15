#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memeory of dog struct
 * @d: The struct to be free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);
}
