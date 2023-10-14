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
	dlistint_t *new_node, *current;
	unsigned int count;

	/* Check if list is empty */
	if (*h == NULL)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	/* Check if memory fails */
	if (new_node == NULL)
		return (NULL);

	/* Create new node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		/* Insert at the begining */
		return (add_dnodeint(h, n));
	}

	count = 0;
	current = *h;

	/* Traverse the list adding new node */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current && current->next == NULL)
		return (add_dnodeint(h, n));

	/* Check if head is empty and add new node */
	while (*h == NULL)
	{
		new_node = *h;
		(*h)->next = new_node;
	}

	/* Check index limit */
	if  (count < idx)
		return (NULL);

	/* Insert new node at a specified index */

	new_node->next = current;
	new_node->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
