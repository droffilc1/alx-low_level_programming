#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: number of bytes to allocate
 * @c: The character to be initilaized
 *
 * Return: pointer to the array. Otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charArray;

	if (size <= 0)
		return (NULL);

	charArray = malloc(sizeof(char) * size);

	if (charArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		charArray[i] = c;

	return (charArray);
}
