#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: The number of arguments
 * @argv: An array of strings
 *
 * Return: 0. Otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, cents, count = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < num_coins; i++)
	{
		count += cents / coin_values[i];
		cents %= coin_values[i];
	}
	printf("%d\n", count);

	return (0);
}
