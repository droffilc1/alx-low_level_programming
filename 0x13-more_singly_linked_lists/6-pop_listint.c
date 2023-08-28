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

	temp = *head;

	if (temp == NULL)
		return (1);

	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
