#include "main.h"

/**
 * check_sqrt - checks input from n to the base
 * @n: The number to be squared
 * @base: base number to be checked
 *
 * Return: natural square root
 */
int check_sqrt(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);

	return (check_sqrt(n + 1, base));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to be checked
 *
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(1, n));
}
