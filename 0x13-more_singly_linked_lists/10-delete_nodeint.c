#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: double pointer to head
 * @index: index to be deleted
 *
 * Return: 1 (Success). Otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (current && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (!current || !current->next)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
