#include "main.h"
#include <stddef.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source array
 * @n: maximum number of characters that can be appended
 *
 * Return: value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;

	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (NULL);

	while (*end != '\0')
	{
		end++;
	}

	while (n--)
	{
		while (!(*end++ = *src++))
		{
			return (dest);
		}
	}

	*end = '\0';

	return (dest);
}
