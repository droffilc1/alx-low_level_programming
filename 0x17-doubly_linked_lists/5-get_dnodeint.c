#include "lists.h"

/**
* get_dnodeint_at_index - returns nth node of a linked list
* @head: pointer to the head
* @index: index of the node
*
* Return: nth node of a linked list. Otherwise NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
