#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: double pointer to head
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	*h = NULL;

	return (count);
}
