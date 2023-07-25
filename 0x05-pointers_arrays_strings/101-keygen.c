#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for a program
 *
 * Return: Always 0
 */
int main(void)
{
	int my_rand;
	int i;
	int total;

	srand(time(NULL));

	for (i = 0, total = 2772; total > 122; i++)
	{
		my_rand = (rand() % 125) + 1;
		printf("%c", my_rand);
		total -= my_rand;
	}
	printf("%c", total);

	return (0);
}
