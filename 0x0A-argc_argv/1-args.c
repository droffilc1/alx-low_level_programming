#include <stdio.h>

/**
 * main - number of arguments passed to it
 * @argc: The number of arguments
 * @argv: An array of strings
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i;
	int count = 0;

	for (i = 1; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);

	return (0);
}
