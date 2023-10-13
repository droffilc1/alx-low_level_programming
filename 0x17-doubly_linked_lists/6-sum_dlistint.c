#include "lists.h"

/**
* sum_dlistint - returns sum of all data of a linked list
* @head: pointer to head os a linked list
*
* Return: sum of all data pf a linked list. Otherwise 0.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
