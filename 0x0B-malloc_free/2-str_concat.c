#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: pointer to newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2);
	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);

	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
