#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: The index
 *
 * Return: 1 (success). Otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
