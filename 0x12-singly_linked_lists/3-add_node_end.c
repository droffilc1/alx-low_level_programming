#include "lists.h"

/**
 * add_node_end - adds a new node to the end of the list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added as the content of the new node
 *
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
