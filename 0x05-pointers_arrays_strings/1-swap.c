#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
