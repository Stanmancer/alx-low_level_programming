#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the first node of the list
 * @str: string to be added in the node
 *
 * Return: address of the new element OR NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp;
	list_t *ptr = *head;

	while (str[len])
		len++;

	temp = malloc(sizeof(temp));
	if (temp == NULL)
		return (temp);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}

	return (temp);
}
