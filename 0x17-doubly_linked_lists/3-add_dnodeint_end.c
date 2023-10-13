#include "lists.h"

/**
* add_dnodeint_end - adds new node at the end of a linked list
* @head: pointer to pointer of the head of a linked lsit
* @n: data of the linked list
*
* Return: address of the new element. Otherwise NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	/* Handle case if memory allocation fails */
	if (new_node == NULL)
		return (NULL);
	/* Create the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/* Find the last node in the list */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/* Update last node's pointer to the new node */
	last_node->next = new_node;
	/* Set the new node's prev pointer to the last node */
	new_node->prev = last_node;
	/* Address of the new node */
	return (new_node);
}
