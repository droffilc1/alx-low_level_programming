#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located. Otherwise -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int pos = 0, l = 0, h = size - 1;

	while (array)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos < size)
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			l = pos + 1;
		else
		h = pos - 1;
	}
	return (-1);
}
