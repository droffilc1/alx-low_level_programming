#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints its opcodes
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	int (*func)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)func;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");

		func++;
	}

	printf("\n");

	return (0);
}
