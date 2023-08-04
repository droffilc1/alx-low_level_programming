#include <stdio.h>

/**
 * main - prints the name of a function
 * @argc: The number arguments
 * @argv: an array of strings
 *
 * Return: name of a function
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
