#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num *= -1;

	_putchar('0' + num);
	return (num);
}
