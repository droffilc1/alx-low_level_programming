#include <stdio.h>

/**
 * main - Finds and prints the largest prime factors of
 * the number 612852475143, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	long test_num = 612852475143;
	long divisor = 2;

	while (divisor != test_num)
	{
		if (test_num % divisor == 0)
		{
			test_num /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", test_num);

	return (0);
}
