#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int i, length, length1;

	length = 0;
	length1 = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length1 = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length1];
		s[length1--] = temp;
	}
}
