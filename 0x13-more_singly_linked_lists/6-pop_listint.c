#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list and returns the data(n)
 * @head: double pointer to the head node
 *
 * Return: the data(n) of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int data;

	if ((*head) == NULL)
		return (0);

	data = (*head)->n;
	pop = (*head)->next;
	free(*head);
	*head = pop;

	return (data);
}
