#include <stdio.h>

/**
 * main - print letters except q nad e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
	}

	putchar('\n');
	return (0);
}
