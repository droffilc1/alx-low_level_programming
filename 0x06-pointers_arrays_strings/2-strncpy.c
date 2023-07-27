#include "main.h"
#include <stddef.h>

/**
* _strncpy - copies a string
* @dest: pointer to the destination array where the contents is be copied
* @src: pointer to the source string which will be copied
* @n: first n character copied from the src to dest
*
* Return: pointer to the dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	if (dest == NULL)
		return (NULL);

	if (src == NULL)
		return (NULL);

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);

}
