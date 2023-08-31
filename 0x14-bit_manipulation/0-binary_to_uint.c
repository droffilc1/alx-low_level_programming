#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string 0 and 1 chars
 *
 * Return: converted number. Otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1, len = 0;
	int i;

	/* Hanlde NULL input */
	if (b == NULL)
		return (0);

	/* Find length of binary string */
	while (b[len] != '\0')
	{
		/* Handle non-0/1 chars in the string */
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	/* Convert binary to decimal */
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			decimal += base;
		base *= 2;
	}
	return (decimal);
}
