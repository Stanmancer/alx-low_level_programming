#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list
 * @head: pointer to first node of the list
 *
 * Return: the sum of all data in the list OR 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
