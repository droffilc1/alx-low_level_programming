#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: number of bytes
 *
 * Return: pointer to the newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i, j, num;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);

	if (num >= len2)
		num = len2;

	ptr = malloc(sizeof(char) * (len1 + num + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
