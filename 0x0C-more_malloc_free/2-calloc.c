#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr = NULL;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(unsigned int) * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
