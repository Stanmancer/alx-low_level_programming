#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listin_t list
 * @head: double pointer to the first node of the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (*head != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
}
