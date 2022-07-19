#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the first node of the list
 * @str: pointer to string to add in node
 *
 * Return: address of the new element or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp = NULL;

	while (str[len])
		len++;

	temp = malloc(sizeof(temp));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
