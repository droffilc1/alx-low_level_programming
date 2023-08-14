#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");
	printf("Name: %s\n", d->name ? d->name : "Name: (nil)");

	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");

	printf("Owner: %s\n", d->owner ? d->owner : "Owner: (nil)");
}

