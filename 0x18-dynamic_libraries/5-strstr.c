#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: The string
 * @needle: The substring to be checked
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return ((char *)haystack);

	while (*haystack)
	{
		char *h_ptr = haystack;
		char *n_ptr = needle;

		while (*n_ptr && (*h_ptr == *n_ptr))
		{
			h_ptr++;
			n_ptr++;
		}

		if (*n_ptr == '\0')
			return ((char *)haystack);

		haystack++;
	}
	return (NULL);
}
