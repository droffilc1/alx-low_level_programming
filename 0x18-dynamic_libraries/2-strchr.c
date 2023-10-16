#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: The string
 * @c: The character to be checked
 *
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0'))
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
