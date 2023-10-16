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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
