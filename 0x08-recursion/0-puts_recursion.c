#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: The string to be printed
 *
 * Return: nothng
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

}
