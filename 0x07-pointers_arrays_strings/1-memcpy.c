#include "main.h"
#include <stddef.h>
/**
 * _memcpy -  copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to copy
 *
 * Return: value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if ((dest != NULL) && (src != NULL))
	{
		while (n)
		{
			*dest = *src;
			--n;
		}
	}
	return (dest);
}
