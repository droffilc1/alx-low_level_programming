#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *temp2;

	size_t count = 0;

	if (!temp)
		exit(98);

	while (temp)
	{
		temp2 = temp;
		temp = temp->next;
		count++;

		printf("[%p] %d\n", (void *)temp2, temp2->n);

		if (temp2 <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp2, temp2->n);
			break;
		}
	}

	return (count);
}
