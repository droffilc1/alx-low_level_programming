#include "lists.h"

/**
* free_dlistint - frees a linked list
* @head: pointer to head of a linked list
*
* Return: notning
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *temp;

	/* Traverse the linked list */
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
