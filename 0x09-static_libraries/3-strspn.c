#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to be checked
 * @accept: The bytes to be checked
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	int n = 0;

	for (n = 0; *s; s++, n++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (!*p)
			break;

	}
	return (n);
}
