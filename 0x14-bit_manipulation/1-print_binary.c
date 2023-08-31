#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int shift, bits, leadingZeroes = 1;

	if (n == 0)
		_putchar('0');

	shift = sizeof(unsigned long int) * 8 - 1;

	while (shift >= 0)
	{
		bits = (n >> shift) & 1;
		if (bits)
		{
			leadingZeroes = 0;
			_putchar('0' + bits);
		}
		else if (!leadingZeroes)
		{
			_putchar('0' + bits);
		}
		shift--;
	}
}
