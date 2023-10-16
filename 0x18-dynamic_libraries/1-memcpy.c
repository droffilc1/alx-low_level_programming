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
	char *dest_char = (char *)dest;
	char *src_char = (char *)src;

	if ((dest_char != NULL) && (src_char != NULL))
	{
		while (n)
		{
			*(dest_char++) = (*src_char++);
			--n;
		}
	}
	return (dest);
}
