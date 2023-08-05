#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the result of the multiplication
 * @argc: The number of arguments
 * @argv: An array of strings
 *
 * Return: 0. Otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
