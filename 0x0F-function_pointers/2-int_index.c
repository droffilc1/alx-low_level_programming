#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: The array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
