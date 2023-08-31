#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visited[1024];
	size_t i;

	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		visited[count] = current;

		if (current != NULL)
			printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}

	return (count);
}
