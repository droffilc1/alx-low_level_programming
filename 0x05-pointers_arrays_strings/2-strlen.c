#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: The characters to be checked
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
