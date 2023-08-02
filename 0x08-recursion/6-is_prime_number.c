#include "main.h"

/**
 * check_prime - checks recursively if number is a prime number
 *@n: iterator
 *@i: number to check
 *
 * Return: 1 if is prime. Otherwise 0
 */
int check_prime(int n, int i)
{
	if (i % n == 0 || i < 2)
		return (0);
	else if (n == i - 1)
		return (1);
	else if (i > n)
		return (check_prime(n + 1, i));

	return (1);
}


/**
 * is_prime_number - checks if number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if is prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (check_prime(2, n));
}
