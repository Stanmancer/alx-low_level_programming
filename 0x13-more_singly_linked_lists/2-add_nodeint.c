#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked listint_t list
 * @head: double pointer to the first node in the list
 * @n: int value to be added to node
 *
 * Return: address of the new element or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = ptr;
	*head = new;

	return (*head);
}
