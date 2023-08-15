#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: The characters to be checked
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The destination
 * @src: The copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *new = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (new);
}

/**
 * new_dog - creates new dog
 * @name: The name member
 * @age: The age member
 * @owner: The owner member
 *
 * Return: pointer to struct. Otherwise null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(_strlen(name) + 1);
	ptr->owner = malloc(_strlen(owner) + 1);

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);

	ptr->age = age;

	return (ptr);
}
