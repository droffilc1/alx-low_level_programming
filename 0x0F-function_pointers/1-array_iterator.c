#include <stddef.h>

/**
 * array_iterator - executes function given
 * as a parameter
 * @array: The array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
