#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	int count = 3;
	long first = 1, second = 2;
	long next = first + second;

	printf("%ld, ", first);
	printf("%ld, ", second);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%ld \n", next);
		}
		else
		{
			printf("%ld, ", next);
		}

		first = second;
		second = next;

		next = first + second;
		count++;
	}
	return (0);
}
