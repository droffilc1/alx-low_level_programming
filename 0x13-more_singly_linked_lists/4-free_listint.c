#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}
