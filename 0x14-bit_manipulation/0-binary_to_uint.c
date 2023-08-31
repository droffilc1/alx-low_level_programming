#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string 0 and 1 chars
 *
 * Return: converted number. Otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power;
	unsigned int value;
	unsigned int sum;
	unsigned int i;
	const char *s;

	if (b == NULL)
		return (0);

	s = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;

	power = 0;
	sum = 0;
	while (b >= s)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		i = *b - '0';
		value = i * (1 << power);
		sum = sum + value;
		b--;
		power++;
	}
	return (sum);
}
