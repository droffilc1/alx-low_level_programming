#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


unsigned int mul(unsigned int num1, unsigned int num2);

/**
 * main - multiplication result of two positive numbers
 *@argc: The number of arguments
 *@argv: The argument vector
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned int num1 = 0, num2 = 0;
	unsigned int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}

		if (i == 1)
			num1 = atoi(argv[i]);
		else if (i == 2)
			num2 = atoi(argv[i]);
	}
	result = mul(num1, num2);
	printf("%u\n", result);

	return (0);
}

/**
 * mul - multiplies two numbers
 * @num1: The first operand
 * @num2: The second operand
 *
 * Return: results
 */
unsigned int mul(unsigned int num1, unsigned int num2)
{

	return (num1 * num2);
}
