#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
