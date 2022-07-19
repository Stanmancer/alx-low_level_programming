#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to HEAD of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		head = temp->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
