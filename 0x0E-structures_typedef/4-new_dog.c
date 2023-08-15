#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: The name member
 * @age: The age member
 * @owner: The owner member
 *
 * Return: pointer to struct. Otherwise null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
