#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: point to pointer of the head
* @index: index of node that should be delete
* Return: 1 (Success). Otherwise -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (index > 0 && current != NULL)
	{
		prev_node = current;
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	prev_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = prev_node;
	free(current);

	return (1);
}
