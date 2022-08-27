#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the firsy node of the list
 * @index: iindex of the node to be deleted, index starts at 0
 *
 * Return: 1 if it suceeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = (*head);
	listint_t *previous = (*head);
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		(*head) = node->next;
		free(node);
		node = NULL;
	}
	else
	{
		while (i < index)
		{
			previous = node;
			node = node->next;
			i++;
		}

		previous->next = node->next;
		free(node);
		node = NULL;
	}

	return (1);
}
