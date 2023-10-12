#include "lists.h"

/**
* add_dnodeint - adds a new node ath the beginning of a linked lists
* @head: pointer to pointer of head of the linked lists
*
* Return: address of the new element. Otherwise NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
