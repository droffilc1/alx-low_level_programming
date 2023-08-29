#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head node
 * @idx: index of list where the new node should be added
 * @n: node data
 *
 * Return: address of new node. Otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int i;
	unsigned int count = 0;

	current = *head;

	while (current)
	{
		current = current->next;
		count++;
	}

	if (idx > count)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
