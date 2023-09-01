#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: The number to checked
 * @index: index of number to be checked
 *
 *Return: value of the bit at a given index. Otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift, bit;

	if (index >= sizeof(int) * 8)
		return (-1);

	shift = n >> index;
	bit = shift & 1;

	return (bit);
}

