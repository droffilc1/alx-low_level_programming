#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 *  the Jump search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int block = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += block;
	}
	i -= block;
	printf("Value found between indexes [%d] and [%d]\n", i, i + block);
	/* perform linear search in current block */
	for (; i <= (i + block) && i < size; i++, block--)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			/* position of the element being searched */
			return (i);
	}
	return (-1);
}
