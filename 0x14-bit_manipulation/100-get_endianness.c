#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian. Otherwise 1.
 */
int get_endianness(void)
{
	int n;
	char *c;

	c = (char *)&n;
	if (c != 0)
		return (1);
	else
		return (0);
}
