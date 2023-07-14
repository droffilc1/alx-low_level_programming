#include <stdio.h>

/**
 * main - print letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char upper = 'A';
	char lower = 'a';

	while (upper <= 'Z' || lower <= 'z')
	{
		putchar(upper);
		upper++;

		putchar(lower);
		lower++;
	}

	putchar('\n');
	return (0);
}
