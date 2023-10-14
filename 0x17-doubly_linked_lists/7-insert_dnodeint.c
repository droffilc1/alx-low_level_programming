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
	dlistint_t *new_node = *h;
	unsigned int count = 0;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	/* Check if memory fails */
	if (new_node == NULL)
		return (NULL);

	/* Create new node */
	new_node->n = n;
	new_node->next = *h;

	/* Traverse the list adding new node */
	while (new_node->next)
	{
		new_node->prev = *h;
		new_node->next = NULL;
		count++;
	}

	/* Check if head is empty and add new node */
	while (*h == NULL)
	{
		new_node = *h;
		(*h)->next = new_node;
	}

	/* Check index limit */
	if  (idx > count)
		return (NULL);

	return (new_node);
}
