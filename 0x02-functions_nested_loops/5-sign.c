#include "main.h"

/**
 * print_sign - checks the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 if number is greater than 0, -1 if less than 0. 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
