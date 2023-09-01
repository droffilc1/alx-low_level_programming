#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the number
 *
 * Return: 1 (success). Otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
