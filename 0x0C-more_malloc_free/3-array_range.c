#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *num_array;
	int i;

	if (min > max)
		return (NULL);

	num_array = malloc(sizeof(int) * (max - min + 1));

	if (num_array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		num_array[i] = min + i;

	return (num_array);
}
