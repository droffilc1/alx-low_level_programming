#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: pointer to the first element of the array
 * @left: left index of the array
 * @right: right index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_helper - helper function to implement binary search
 * @array: a pointer to the first element of the array to search in
 * @l: left array index of the array
 * @r: right array index of the array
 * @key: key to search for
 *
 * Return: index where key is located. Otherwise -1
*/
int binary_search_helper(int *array, int l, int r, int key)
{
	int mid;

	if (l > r)
		return (-1);

	/* print the array being searched*/
	print_array(array, l, r);
	/* find the mid element */
	mid = l + (r - l) / 2;

	/* check if element is mid */
	if (array[mid] == key)
		return (mid);

	if (array[mid] > key)
		/* if element is greater than mid it is on the left side */
		return (binary_search_helper(array, l, mid - 1, key));

	/* if element is less than mid it is on the right side*/
	return (binary_search_helper(array, mid + 1, r, key));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return:  index where value is located. Otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_helper(array, 0, size - 1, value));
}
