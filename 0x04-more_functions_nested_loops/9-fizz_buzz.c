#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line.
 * For multiples of 3 prints Fizz, multiples of 5 prints Buzz, and for
 * multiples of both 3 and 5 print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
