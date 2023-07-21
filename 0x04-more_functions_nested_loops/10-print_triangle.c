#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of the rectangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar(' ');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
