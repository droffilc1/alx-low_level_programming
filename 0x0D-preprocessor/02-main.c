#include <stdio.h>

/**
 * main - prints name of the file it was compiled from
 * followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: name of the file
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	while (i < argc)
	{
		i++;
		printf("%s\n", __FILE__);
	}

	return (0);
}
