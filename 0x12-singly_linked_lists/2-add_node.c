#include "lists.h"

/**
 * add_node - adds new node t the beginning
 * @head: element to be used
 * @str: string
 *
 * Return: address of the new element. Otherwise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*new);
}
