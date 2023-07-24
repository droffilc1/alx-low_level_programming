#include <stdio.h>

/**
 * print_array - prints n elements of an array, followed by a
 * new line
 * @a: The input array
 * @n: The length of the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
