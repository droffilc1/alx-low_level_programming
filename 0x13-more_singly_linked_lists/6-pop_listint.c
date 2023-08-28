#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: list head pointer
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (1);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
