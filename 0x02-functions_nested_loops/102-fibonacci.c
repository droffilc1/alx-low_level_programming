#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	int i = 3;
	long j = 1, k = 2;
	long m = j + k;

	printf("%ld, ", j);
	printf("%ld, ", k);

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%ld \n", m);
		}
		else
		{
			printf("%ld, ", m);
		}

		j = k;
		k = m;

		m = j + k;
		i++;
	}
	return (0);
}
