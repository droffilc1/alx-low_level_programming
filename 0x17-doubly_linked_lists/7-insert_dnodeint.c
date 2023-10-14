#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to pointer of the head node
* @idx: index oof list where new node will be added
* @n: data f the node
*
* Return: address of the new node. Otherwise NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (idx == 0)
		/* Insert at the begining */
		return (add_dnodeint(h, n));

	/* Traverse the list adding new node */
	while (current != NULL && count < idx - 1)
	{
		count++;
		current = current->next;
	}

	if (current && current->next == NULL)
		return (add_dnodeint_end(h, n));

	if (current != NULL)
	{
		/* Allocate memory for new node */
		dlistint_t *new_node = malloc(sizeof(dlistint_t));
		/* Check if memory allocation fails */
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
		return (new_node);
	}
	return (NULL);
}
