#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: The string
 *
 * Return: pointer to a new string. Otherwise NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, str);

	return (ptr);
}
