#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: list
 *
 * Return: 0 (Success)
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
