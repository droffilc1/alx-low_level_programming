#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head
 *
 * Return:: nothing
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
