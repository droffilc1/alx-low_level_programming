#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}


/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int total_size = nmemb * size;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, total_size); /*Initialize memory to zero */

	return (ptr);
}
