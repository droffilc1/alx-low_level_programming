#include "main.h"
#include <stddef.h>

/**
 * _strcat - concatenates two strings
 * @dest: The destination
 * @src: The file to be concatenated
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	if (dest == NULL)
		return (NULL);

	if (src == NULL)
		return (NULL);

	while (*start != '\0')
	{
		start++;
	}

	while (*src != '\0')
	{
		*start++ = *src++;
	}

	*start = '\0';

	return (dest);
}
