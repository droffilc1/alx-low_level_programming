#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %lu", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %lu", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
