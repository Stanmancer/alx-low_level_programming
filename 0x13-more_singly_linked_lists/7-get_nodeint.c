#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (node->next == NULL)
			return (NULL);

		node = node->next;
		i++;
	}
	return (node);
}
