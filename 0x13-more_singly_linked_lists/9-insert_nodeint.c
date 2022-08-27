#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to first node in the list
 * @idx: index of the list where the new node will be added, index starts at 0
 * @n: data(n) to be in the new node
 *
 * Return: address of the new node, OR NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = (*head);
	listint_t *new = NULL;
	listint_t *temp = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		(*head) = new;
	else if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
	}
	else
	{
		while (i < (idx - 1))
		{
			if (node->next == NULL)
				return (NULL);
			node = node->next;
			i++;
		}
		temp = node->next;
		node->next = new;
		new->next = temp;
	}

	return (new);
}
